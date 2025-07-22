#include "Combat.h"
#include <iostream>
#include <cstdlib>

using namespace std;


//Player attack
void performAttack(Player& player, Enemy& enemy) {

    int damage = player.attack + (rand() % 6); // 0-5 added damage
    cout << "You attack the " << enemy.name << " for " << damage << " damage!" << endl;
    enemy.health -= damage;
}


//Heal
void performHeal(Player& player) {

    int healAmount = 10 + (rand() % 6); // 0-5 added heal
    player.health += healAmount;
    cout << "You healed for " << healAmount << endl;
}

//Run away
bool tryToRun() {

    cout << "You ran away (Loser)" << endl;
    return true;

}

//Combat loop
void startCombat(Player& player, Enemy& enemy) {

    while (player.health > 0 && enemy.health > 0) {

        int actionChoice;

        cout << "=== YOUR TURN ===" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Heal" << endl;
        cout << "3. Run Away" << endl;
        cout << "Choose an option: " << endl;
        cin >> actionChoice;

        switch (actionChoice) {

            case 1: 
                performAttack(player, enemy);
                break;
            case 2: 
                performHeal(player);
                break;
            case 3: 
                if (tryToRun()) return;
                break;
            default:
                cout << "Invalid choice you lost yout turn!" << endl;
                break;
        }

        if (enemy.health <=0) {

            cout << "Enemy has been defeated!" << endl;
            break;
        }

        //Enemy attack

        cout << "=== ENEMYS TURN ===" << endl;
        int enemyDamage = enemy.attack + (rand() % 4); // 0-3 added damage
        cout << enemy.name << " attacked you for: " << enemyDamage << " damage!" << endl;
        player.health -= enemyDamage;

        if (player.health <= 0) {

            cout << "you have been defeated!" << endl;
            break;
        }

        cout << "Player HP:  " << player.health << endl;
        cout << "Enemy HP:  " << enemy.health << endl;
    }
}