#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 
//
// Created by COMPUMARTS on 11/12/2025.
//
#include <iostream>
#include <string>
using namespace std;
class Bird : public Animal {
private:
    float wingSpan;
public:
    Bird();
    Bird(string n , int a ,float s , bool isH) : Animal(n,a,isH) {
        wingSpan = s;
    };
    ~Bird();

    float getSpan();
    void setSpan();


};

#endif //ASSIGNMENT01_BIRD_H






#endif
