#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCoreApplication>
#include <QLineEdit>
#include <QPushButton>
#include <QStandardPaths>
#include <QListWidget>
#include "StorageManager.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbout_triggered();
    void on_actionExit_triggered();
    void on_btnAddItem_clicked();

    void on_btnFindItem_clicked();

    void on_btnRemoveItem_clicked();

    void on_btnSortList_clicked();

    void on_btnResetSort_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit *idInput, *descInput, *locationInput;
    QLineEdit *findIdInput, *removeIdInput;
    StorageManager manager;
    std::vector<std::shared_ptr<StoredItem>> originalItemOrder;

};
#endif // MAINWINDOW_H
