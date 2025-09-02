#include "animal.h"

Animal::Animal() : species(""), year_discovered(0) {}

Animal::Animal(std::string speciesName, unsigned int discoveryYear) {
    species = speciesName;
    year_discovered = discoveryYear;
}

void Animal::display() const {
    std::cout << species << " [" << year_discovered << "]" << std::endl;
}
