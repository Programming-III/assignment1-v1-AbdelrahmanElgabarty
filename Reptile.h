#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here
//
// Created by COMPUMARTS on 11/12/2025.
//
#include <iostream>
#include <string>
using namespace std;
class Reptile : public Animal{
private:
    bool isVenomous;
public:
    Reptile();
    Reptile(string n , int a , bool is , bool isH) : Animal(n,a , isH){};
    ~Reptile();

    bool GetVen();
};

#endif //ASSIGNMENT01_REPTILE_H








#endif
