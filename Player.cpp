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