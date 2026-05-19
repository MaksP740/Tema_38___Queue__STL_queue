#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Person {
    string name;
    bool isVeteran;
    bool isMilitary;
    bool isDeputat;
public:
    Person();
    Person(string name, bool isVeteran = false, bool isMilitary = false, bool isDeputat = false);

    void showInfo() const;
    bool operator < (const Person & obj) const; // A < B  *this < obj



};

