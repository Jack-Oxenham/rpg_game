#include "Item.h"
#include <iostream>


Item::Item(std::string name, std::string description) {

    this->name = name;
    this->description = description;
}


void Item::use() {

    std::cout << "You used the: " << name << "." << description << std::endl;
}