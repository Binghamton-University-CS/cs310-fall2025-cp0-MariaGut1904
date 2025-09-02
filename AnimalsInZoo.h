#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H

#include "animal.h"

class AnimalsInZoo {
private:
    int numAnimals;
    Animal animal;

public:
    AnimalsInZoo();           // default
    AnimalsInZoo(Animal a);   // 1 animal
    void display() const;
};

#endif

      