#include <iostream>
#include "animal.h"
#include "AnimalsInZoo.h"
using namespace std;
int main() {
    // Create Animal objects
    Animal animal1("White Tailed Deer", 1646);
    Animal animal2("Giant Panda", 1869);
    Animal animal3("Snow Leopard", 1777);

    // Display them
    animal1.display();
    animal2.display();
    animal3.display();

    // Create AnimalsInZoo objects
    AnimalsInZoo zoo1;         // empty zoo
    AnimalsInZoo zoo2(animal1); // zoo with 1 animal

    std::cout << "Zoo #1:" << std::endl;
    zoo1.display();

    std::cout << "Zoo #2:" << std::endl;
    zoo2.display();

    return 0;
}

