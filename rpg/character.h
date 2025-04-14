//
//  character.h
//  rpg
//
//  Created by Hailia Sommerville on 4/13/25.
//
#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character{
private:
    string name, role;
    int level;
public:
    Character();
    Character(string, string, int);
    void displayChar();
    void setName(string);
    void setRole(string);
    void setLevel(int);
    
};


#endif
