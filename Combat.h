#pragma once

#include "Player.h"
#include "Enemy.h"



//Declarations

void performAttack(Player& player, Enemy& enemy);
void performHeal(Player& player);
bool tryToRun();
void startCombat(Player& player, Enemy& enemy);