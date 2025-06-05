#include "storagemanager.h"
#include <iostream>

void StorageManager::addItem(const std::shared_ptr<StoredItem>& item) {
    if (itemById.find(item->getId()) != itemById.end()) {
        throw DuplicateItemException("Item with ID " + item->getId() + " already exists.");
    }

    itemById[item->getId()] = item;
    itemByDescription[item->getDescription()] = item;
    std::cout << "Adding item: " << item->getId() << " - " << item->getDescription() << std::endl;
}

std::shared_ptr<StoredItem> StorageManager::findById(const std::string& id) const {
    auto it = itemById.find(id);
    if (it != itemById.end()) {
        return it->second;
    } else {
        throw ItemNotFoundException("No item with ID '" + id + "' found.");
    }
}

void StorageManager::removeItem(const std::string& id) {
    auto it = itemById.find(id);
    if (it == itemById.end()) {
        throw ItemNotFoundException("No item with ID '" + id + "' found.");
    }

    std::string description = it->second->getDescription();
    std::cout << "Removing item: " << id << " (" << description << ")" << std::endl;

    itemById.erase(it);
    itemByDescription.erase(description);
}

void StorageManager::listItemsByDescription() const {
    if (itemByDescription.empty()) {
        std::cout << "No items to display.\n";
        return;
    }
    for (const auto& pair : itemByDescription) {
        std::shared_ptr<StoredItem> item = pair.second;
        std::cout << "- " << item->getDescription() << ": " << item->getLocation() << '\n';
    }
}

std::vector<std::shared_ptr<StoredItem>> StorageManager::getAllItems() const {
    std::vector<std::shared_ptr<StoredItem>> items;
    for (const auto& pair : itemById) {
        items.push_back(pair.second);
    }
    return items;
}

