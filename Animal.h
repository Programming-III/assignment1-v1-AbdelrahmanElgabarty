#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
//
// Created by COMPUMARTS on 11/12/2025.
//
class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string n , int a , bool isH);
    ~Animal();
    void display();
    void feed();

    string getName();
    int getAge();

    void setName();
    void setAge();
};

#endif //ASSIGNMENT01_ANIMAL_H


#endif
