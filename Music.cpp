#include "Music.h"

Music::Music() {
    name = "Не відомо";
    autor = "Не відомо";
    year = 0;
}

Music::Music(std::string name, std::string autor, int year) {
    this->name = name;
    this->autor = autor;
    this->year = year;
}

std::string Music::getName() const {
    return name;
}

std::string Music::getAutor() const {
    return autor;
}

int Music::getYear() const {
    return year;
}
