//
// Created by MacBook_Air_Maks on 19.05.2026.
//

#include "Music.h"

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
