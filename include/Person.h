#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"  // For FlowerBouquet
#include "Florist.h"        // Florist is defined in another file

class Person {
private:
    std::string name;

public:
    Person(const std::string& name) : name(name) {}
    void acceptFlowers(FlowersBouquet* bouquet);
    void orderFlowers(Florist* florist, Person* recipient, const std::vector<std::string>& flowers);
};

#endif // PERSON_H
