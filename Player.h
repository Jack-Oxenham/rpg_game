#pragma once

#include <string>


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


};