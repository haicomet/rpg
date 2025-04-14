//
//  character.cpp
//  rpg
//
//  Created by Hailia Sommerville on 4/13/25.
//
#include "character.h"

Character::Character(){
    name = "user";
    role = "noob";
    level = 0;
}
Character::Character(string n, string r, int l){
    name = n;
    role = r;
    level = l;
}
void Character::setName(string n){name = n;}
void Character::setRole(string r){role = r;}
void Character::setLevel(int l){level = l;}
