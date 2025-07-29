#include "Player.h"
#include "Enemy.h"
#include "Combat.h"
#include "Item.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 


bool gameRunning = true;


void showMainMenu() {

    cout << "=== RPG GAME ===" << endl;
    cout << "1.  Start Game" << endl;
    cout << "2.  Exit" << endl;
    cout << "Select an option:  " << endl;

}

int main () {

    //Random number generator
    srand(static_cast<unsigned>(time(0)));

    int choice;

    while (gameRunning) {
        
        showMainMenu();
        cin >> choice;
        cin.ignore();

        switch(choice) {

            case 1: {

                cout << "Starting Game..." << endl;
                //Characters
                Player warrior("Warrior", 120, 15, 10, 1);
                Player sniper("Sniper", 80, 25, 5, 1);
                Player soldier("Soldier", 100, 18, 8, 1);

                cout << "== CHOOSE YOUR CHARACTER ==" << endl;
                cout << "1.  Warrior" << endl;
                cout << "2. Sniper" << endl;
                cout << "3. Soldier" << endl;

                int classChoice;
                cin >> classChoice;
                cin.ignore();

                Player player;

                switch(classChoice) {

                    case 1: 
                        player = warrior;
                        break;
                    case 2: 
                        player = sniper;
                        break;
                    case 3:
                        player = soldier;
                        break;
                    default:
                        cout << "invalid choice, Defaulting to warrior." << endl;
                        player = warrior;
                        break;
                }

                cout << "You have selected:  " << endl;
                player.showStats();

                //Add items to inventory
                Item* potion = new Item("Health Potion", "Restores 50 health points.");
                player.addItem(potion);

                //view inventory
                cout << "Your inventory: " << endl;
                player.showInventory();


                //Enemy 
                Enemy enemy("Goblin", 80, 10);
                enemy.showStats();

                //Start Combat
                startCombat(player, enemy);


                break;

            }
            case 2: 
                cout << "Exiting..." << endl;
                gameRunning = false;
                break;
            default:
                cout << "invalid entry" << endl;
        }
    }
    return 0;
}