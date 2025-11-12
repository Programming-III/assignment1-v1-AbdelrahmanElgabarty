#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here
//
// Created by COMPUMARTS on 11/12/2025.
//
using namespace std;
class Visitor {
private:
    string visitorName;
    int ticketsabought;
public:
    Visitor();
    Visitor(string n , int t);
    ~Visitor();
    void displayInfo();

    void getName();
    void getticketNum();

    string setName();
    int ticketNum();
};

#endif //ASSIGNMENT01_VISITOR_H






#endif
