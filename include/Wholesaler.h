#pragma once
#define WHOLESALER_H

#include <vector>
#include <string>
#include "Grower.h"         // For Grower
#include "FlowersBouquet.h" 
#include "Person.h" // For FlowerBouquet
class Gardener; // Forward declaration of Gardener
class Grower; // Forward declaration of Grower

class Wholesaler :public Person {
private:
    Grower* grower;

public:
    explicit Wholesaler(const std::string& name, Grower* grower);
    void setWholesaler(Wholesaler* w);
    FlowersBouquet* acceptOrder(const std::vector<std::string>& flowers);
};


