#include <iomanip>
#include "Person.h"

Person::Person() {
    name = "Не відомо";
    isVeteran = false;
    isMilitary = false;
    isDeputat = false;
}

Person::Person(string name, bool isVeteran, bool isMilitary, bool isDeputat) {
    this->name = name;
    this->isVeteran = isVeteran;
    this->isMilitary = isMilitary;
    this->isDeputat = isDeputat;
}

void Person::showInfo() const
{
    cout << "Ім'я: " << name << endl;
    cout << "Ветеран: " << (isVeteran ? "Так" : "Ні") << endl;
    cout << "Військовий: " << (isMilitary ? "Так" : "Ні") << endl;
    cout << "Депутат: " << (isDeputat ? "Так" : "Ні") << endl;
}

bool Person::operator<(const Person &obj) const {
    return (this->isVeteran + this->isDeputat + this->isMilitary) < (obj.isVeteran + obj.isDeputat + obj.isMilitary);
}
