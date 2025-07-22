#pragma once

#include <string>


class Enemy {


public:

    std::string name;
    int health;
    int attack;





    //constructor
    Enemy(std::string enemyName, int hp, int atk);

    void showStats();








};