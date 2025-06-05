#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QStandardPaths>

StorageManager manager;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(nullptr, "Info", "Ricardo Ramirez\nCIS-12B Assignment6 - Congo GUI");
}


void MainWindow::on_actionExit_triggered()
{
    close();
}




void MainWindow::on_btnAddItem_clicked()
{
    try {
        std::shared_ptr<StoredItem> newItem = std::make_shared<StoredItem>(
            ui->textBox_ID->text().toStdString(),
            ui->textBox_desc->text().toStdString(),
            ui->textBox_Location->text().toStdString()
            );

        // Add item using StorageManager
        manager.addItem(newItem);
        originalItemOrder.push_back(newItem); // Store original entry order

        // Display item in QListWidget
        QString displayText = QString("%1 | %2 | %3")
                                  .arg(QString::fromStdString(newItem->getId()))
                                  .arg(QString::fromStdString(newItem->getDescription()))
                                  .arg(QString::fromStdString(newItem->getLocation()));

        ui->listWidget->addItem(displayText);

        // Clear input fields and refocus
        ui->textBox_ID->clear();
        ui->textBox_desc->clear();
        ui->textBox_Location->clear();
        ui->textBox_ID->setFocus();

    } catch (const DuplicateItemException& e) {
        QMessageBox::warning(this, "Duplicate Error", e.what());
    }
}


void MainWindow::on_btnFindItem_clicked()
{
    try {
        std::shared_ptr<StoredItem> foundItem = manager.findById(ui->textBox_Find_ID->text().toStdString());

        QMessageBox::information(this, "Item Found",
                                 QString("ID: %1\nDescription: %2\nLocation: %3")
                                    .arg(QString::fromStdString(foundItem->getId()))
                                    .arg(QString::fromStdString(foundItem->getDescription()))
                                    .arg(QString::fromStdString(foundItem->getLocation()))
                                 );
    } catch (const ItemNotFoundException& e) {
        QMessageBox::warning(this, "Not Found", e.what());
    }
}


void MainWindow::on_btnRemoveItem_clicked()
{
    try {
        manager.removeItem(ui->textBox_Find_ID->text().toStdString());

        // Remove from QListWidget
        for (int i = 0; i < ui->listWidget->count(); ++i) {
            if (ui->listWidget->item(i)->text().startsWith(ui->textBox_Find_ID->text())) {
                delete ui->listWidget->takeItem(i);
                break;
            }
        }

        ui->textBox_Find_ID->clear();

    } catch (const ItemNotFoundException& e) {
        QMessageBox::warning(this, "Deletion Error", e.what());
    }
}




void MainWindow::on_btnSortList_clicked()
{
    ui->listWidget->clear();  // Clear existing list

    // Retrieve all items from StorageManager via getter function
    std::vector<std::shared_ptr<StoredItem>> items = manager.getAllItems();

    // Sort items by description
    std::sort(items.begin(), items.end(), [](const std::shared_ptr<StoredItem>& a, const std::shared_ptr<StoredItem>& b) {
        return a->getDescription() < b->getDescription();
    });

    // Add sorted items back to the QListWidget
    for (const auto& item : items) {
        QString displayText = QString("%1 | %2 | %3")
        .arg(QString::fromStdString(item->getId()))
            .arg(QString::fromStdString(item->getDescription()))
            .arg(QString::fromStdString(item->getLocation()));

        ui->listWidget->addItem(displayText);
    }
}


void MainWindow::on_btnResetSort_clicked()
{
    ui->listWidget->clear();  // Clear current sorted list

    // Restore items in original order
    for (const auto& item : originalItemOrder) {
        ui->listWidget->addItem(QString::fromStdString(item->getId() + " | " + item->getDescription() + " | " + item->getLocation()));
    }
}

