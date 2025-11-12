#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

//define mammal class here
//
// Created by COMPUMARTS on 11/12/2025.
//
#include <iostream>
#include <string>
using namespace std;
class Mammal : public Animal {
private:
    string furColor;
public:
    Mammal();
    Mammal(string c , string name , int age , bool isH) : Animal(name,age,isH) {
        furColor = c;
    }

    ~Mammal();

    string getfurColor();
    void setFurColor()const;

};


#endif //ASSIGNMENT01_MAMMAL_H





#endif
