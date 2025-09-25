/* Robert Pohl
 * Project 2: Fight Club
 * Make a DnD Fight Simulator
 */



#include <iostream>

#include "Character.h"

using namespace std;

int main() {
    cout << "His Name is Robert Paulson!" << endl;

    string name;
    string role;
    int HP;
    int atk;
    int damage;
    int armor;

    cout << "Welcome to Fight Club! SHHHHHHH. Name your First Character:";
    cin >> name;
    cin.ignore(500, '\n');
    cout << "\n Class:";
    cin >> role;
    cin.ignore(500, '\n');
    cout << "\n Number of Hit Points:";
    cin >> HP;
    cout << "\n Number for Atk Bonus:";
    cin >> atk;
    cout << "\n Amount of Bonus Damage:";
    cin >> damage;
    cout << "\n And finally, the Armor Class:";
    cin >> armor;
    cin.ignore();

    Character c1(name, role, HP, atk, damage, armor);

    c1.print(cout);

    cout << "Name your 2nd Character:";
    cin >> name;
    cin.ignore(500, '\n');
    cout << "\n Class:";
    cin >> role;
    cin.ignore(500, '\n');
    cout << "\n Number of Hit Points:";
    cin >> HP;
    cout << "\n Number for Atk Bonus:";
    cin >> atk;
    cout << "\n Amount of Bonus Damage:";
    cin >> damage;
    cout << "\n And finally, the Armor Class:";
    cin >> armor;
    cin.ignore();

    Character c2(name, role, HP, atk, damage, armor);

    c2.print(cout);

    while (c1.getHealth() > 0 && c2.getHealth() > 0) {
        c1.attack(c2);
        c2.attack(c1);
    }

    if (c1.getHealth() == 0) {
        cout << c2.getNameTheRole() << " has killed " << c1.getNameTheRole() << " and won!" << endl;
    }

    else {
        cout << c1.getNameTheRole() << " has killed " << c2.getNameTheRole() << " and won!" << endl;
    }

    return 0;
}