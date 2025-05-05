#pragma once
#define WHOLESALER_H

#include <vector>
#include <string>
#include "Grower.h"         // For Grower
#include "FlowersBouquet.h" 
#include "Person.h" // For FlowerBouquet

class Wholesaler :public Person {
private:
    Grower* grower;

public:
    explicit Wholesaler(const std::string& name, Grower* grower);
    FlowersBouquet* acceptOrder(const std::vector<std::string>& flowers);
};


