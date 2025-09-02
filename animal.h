#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>


class Animal {
private:
    std::string species;
    unsigned int year_discovered;

public:
    Animal(); // default
    Animal(std::string speciesName, unsigned int discoveryYear); // parameterized
    void display() const;
};

#endif
