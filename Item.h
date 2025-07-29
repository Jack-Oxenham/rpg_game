#pragma once
#include <string>



class Item {

public:
    std::string name;
    std::string description;

    Item(std::string name, std::string description);

    void use();


};