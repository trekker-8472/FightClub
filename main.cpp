/* Robert Pohl
 * Project 2: Fight Club
 * Make a DnD Fight Simulator
 */



#include <iostream>

#include "Character.h"

using namespace std;

int main() {
    cout << "His Name is Robert Paulson" << endl;

    Character c1;
    Character c2;

    string name;
    string role;
    int HP;
    int atk;
    int damage;
    int armor;

    cout << "Welcome to Fight Club! shhhhh. Name your First Character:";
    cin >> name;
    cout << "\n Class:";
    cin >> role;
    cout << "\n Number of Hit Points:";
    cin >> HP;
    cout << "\n Number for Atk Bonus:";
    cin >> atk;
    cout << "\n Amount of Bonus Damage:";
    cin >> damage;
    cout << "\n And Finally the Armor Class:";
    cin >> armor;
    cin.ignore();

    Character c1(name, role, HP, atk, damage, armor);


    return 0;
}