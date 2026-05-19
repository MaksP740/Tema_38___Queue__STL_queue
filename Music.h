#include <string>
#include <iostream>


class Music {
    std::string name;
    std::string autor;
    int year;
public:
    Music(std::string name, std::string autor, int year);

    std::string getName() const;
    std::string getAutor() const;
    int getYear() const;


};

