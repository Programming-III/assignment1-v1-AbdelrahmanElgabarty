#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 
//
// Created by COMPUMARTS on 11/12/2025.
//
#include <string>
using namespace std;
class Enclosure : public Animal{
private:
    Animal* animals;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure( string name , int age , int cap , int curr , Animal* a) : Animal(name,age){};
    ~Enclosure();

    void addAnimal(Animal * a);
    void displayAnimals();
};

#endif //ASSIGNMENT01_ENCLOSURE_H







#endif
