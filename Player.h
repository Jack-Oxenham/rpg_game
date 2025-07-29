#pragma once
#include "Item.h"
#include <string>
#include <vector>

class Player {


public:
    std::string name;
    int health;
    int attack;
    int defence;
    int level;


//default constructor
Player();


//character constructor

Player(std::string playerName, int hp, int atk, int def, int lvl);




void showStats();



//Player Inventory

std::vector<Item*> inventory;

void addItem(Item* item);
void showInventory();
void useItem(int index);
};