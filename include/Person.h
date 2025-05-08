#pragma once
#define PERSON_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"  // For FlowerBouquet
class Florist; // Forward declaration of Florist
 
class FlowersBouquet;    

class Person {
private:
    std::string name;

public:
    
    explicit Person(const std::string& name);
    
    void acceptFlowers(FlowersBouquet* bouquet);
    void orderFlowers(Florist* florist, Person* recipient, const std::vector<std::string>& flowers);
    const std::string& getName() const { return name; }
     
};


