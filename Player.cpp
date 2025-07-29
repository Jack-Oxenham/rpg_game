#include "Player.h"
#include <iostream>

//default constructor
Player::Player() {

    
    name = "";
    health = 0;
    attack = 0;
    defence = 0;
    level = 1;
}


//character constructor 

Player::Player(std::string playerName, int hp, int atk, int def, int lvl) {

    name = playerName;
    health = hp;
    attack = atk;
    defence = def;
    level = lvl;
}

void Player::showStats() {

    std::cout << "====== PLAYER STATS ======" << std::endl;
    std::cout << "Name is: " << name << std::endl;
    std::cout << "health is: " << health << std::endl;
    std::cout << "attack is: " << attack << std::endl;
    std::cout << "defence is: " << defence << std::endl;
    std::cout << "level is:  " << level << std::endl;


}

//Player Inventory

void Player::addItem(Item* item) {

    inventory.push_back(item);
    std::cout << "Item added to inventory: " << item->name << std::endl;
}


void Player::showInventory() {

    std::cout <<"====== PLAYER INVENTORY ======" << std::endl;
    if (inventory.empty()) {
        std::cout << "inventory is empty." << std::endl;
        return;
    }

    for (size_t i = 0; i < inventory.size(); ++i) {
        std::cout << i + 1 << ". " << inventory[i]->name << inventory[i]->description << std::endl;
    }
}

void Player::useItem(int index) {

    if (index < 0 || index >= static_cast<int>(inventory.size())) {
        std::cout << "Invalid item index." << std::endl;
        return;
    }

    inventory[index]->use();
    delete inventory[index];
    inventory.erase(inventory.begin() + index);
}

