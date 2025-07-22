#include "Enemy.h"
#include <iostream>





Enemy::Enemy(std::string enemyName, int hp, int atk) {

    name = enemyName;
    health = hp;
    attack = atk;

}



void Enemy::showStats() {

    std::cout << "=== ENEMY STATS ===" << std::endl;
    std::cout << "Enemy name:  " << name << std::endl;
    std::cout << "Enemy HP:  " << health << std::endl;
    std::cout << "Enemy Attack. " << attack << std::endl;
    

}



