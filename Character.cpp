#include "Character.h"

#include <cstdlib>
#include <iostream>

using namespace std;


// TODO: implement constructor to initialize all members
Character::Character(std::string name,
    std::string role,
    int hitPoints,
    int attackBonus,
    int bonusDamage,
    int armorClass)
{
}

// TODO: output character to the ostream os like:
// os << firstName << " " << lastName << " " <<...
void Character::print(std::ostream& os) const
{
    os << name << " a " << role << " with " << hitPoints
    << "Hit Points and and Armor Class of " << armorClass
    << "and finally, a to hit bonus of "<< attackBonus << endl;

}

// TODO: here you will implement the attack logic
// "this" character is the attacking character
// otherCharacter is the one being attacked/damaged
// note: otherCharacter is passed by reference, meaning anything
// that happens to it here happens to the original one
// per the assignment:
// 1. Roll 20-sided die (random 1-20) and add attackBonus
// 2. If result >= otherCharacter.armorClass, attack hits, otherwise miss
// 3. If attack hits, roll 10-sided die and add attacking character damageBonus
//    call otherCharacter.damage to deal that amount of damage
void Character::attack(Character& otherCharacter) const
{
    int totalDamage = 0;
    int d10DamageRoll = 0;
    srand(time(nullptr));
    int d20Roll = rand() % 20;
    int attackTotal = d20Roll + attackBonus;

    if (attackTotal >= otherCharacter.armorClass) {
        d10DamageRoll = rand() % 10;
        totalDamage = d10DamageRoll + bonusDamage;
    }
    else {
        cout << "You missed!" << endl;
    }
}

// TODO: subtract damageDone from the character's hit points, checking that it does not drop below zero
void Character::damage(int damageDone)
{

}

// TODO: return character's health
int Character::getHealth() const {
    return hitPoints;
}

// TODO: return character's name
std::string Character::getName() const {
    return name;
}

// TODO: return the character's role
std::string Character::getRole() const {
    return role;
}

// OPTIONAL: you can use this to get the character's name/role all in one
// e.g. if the name is Uglar and the role is Warrior, this could return
// "Uglar the Warrior"
std::string Character::getNameTheRole() const {
    return "";
}