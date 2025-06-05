#ifndef STORAGEMANAGER_H
#define STORAGEMANAGER_H

#include <unordered_map>
#include <vector>
#include <map>
#include <memory>
#include "storeditem.h"
#include "DuplicateItemException.h"
#include "ItemNotFoundException.h"

class StorageManager {
private:
    std::unordered_map<std::string, std::shared_ptr<StoredItem>> itemById;
    std::map<std::string, std::shared_ptr<StoredItem>> itemByDescription;

public:
    void addItem(const std::shared_ptr<StoredItem>& item);
    std::shared_ptr<StoredItem> findById(const std::string& id) const;
    void removeItem(const std::string& id);
    void listItemsByDescription() const;

    std::vector<std::shared_ptr<StoredItem>> getAllItems() const;

};

#endif // STORAGEMANAGER_H
