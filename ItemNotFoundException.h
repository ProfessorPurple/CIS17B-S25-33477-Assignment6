#ifndef ITEMNOTFOUNDEXCEPTION_H
#define ITEMNOTFOUNDEXCEPTION_H

#include <stdexcept>
#include <string>

class ItemNotFoundException : public std::runtime_error {
public:
    ItemNotFoundException(const std::string& msg) : std::runtime_error(msg) {}
};

#endif // ITEMNOTFOUNDEXCEPTION_H
