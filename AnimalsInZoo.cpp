#include "AnimalsInZoo.h"
#include <iostream>


AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}

AnimalsInZoo::AnimalsInZoo(Animal a) : animal(a), numAnimals(1) {}

void AnimalsInZoo::display() const {
    std::cout << "Number of animals: " << numAnimals << std::endl;
    if (numAnimals == 1) {
        animal.display();
     }else{
        std::cout<< "There are no animals."  << std::endl;
     }
            
}

