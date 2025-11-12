#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;


// ============== MAIN FUNCTION ==============

Animal::Animal(string n, int a , bool isH) {
    name = n;
    age = a;

}
void Animal::display() {
    cout << "Animal Name : " << name << "Animal Age : " << age << endl;
}

int Animal::getAge() {
    return age;
}
string Animal::getName() {
    return name;
}
void Animal::feed() {
    ;

}
Mammal::Mammal() {

}



string Mammal::getfurColor() {
    return furColor;
}

void Mammal::setFurColor() const {
    furColor == "blue";
}
 Bird::Bird(string n , int a , float s , bool isH) {
        wingSpan = s;
 }

float Bird::getSpan() {
    return wingSpan;
}

void Bird::setSpan() {
    wingSpan = 10;
}

Reptile::Reptile(string n , int a , bool is , bool isH) {


};

bool Reptile::GetVen() {
    return isVenomous;
}

Enclosure::Enclosure(int cap, int curr, Animal *a) {
    capacity = cap;
    currentCount = curr;

}

void Enclosure::displayAnimals() {

}

void Enclosure::addAnimal(Animal *a) {

}
int main() {
    Animal a1("Lion" , 5 , true);
    Bird b1("Parrot", 2 , false);
    Reptile r1("Snake" , 3 , true , true);

    Visitor v1("Sarah Ali" , 3);

    Enclosure e1(5, 3 ,&a1);


}



































int main() {
    
    
    return 0;
}
