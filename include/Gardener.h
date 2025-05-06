#pragma once
#define GARDENER_H



#include <vector>
#include <string>
#include "FlowersBouquet.h"  // Assuming FlowerBouquet is defined here
#include "Person.h"
class Wholesaler; // Forward declaration of Wholesaler
class Grower; // Forward declaration of Grower

class Gardener:public Person {
private:
    Grower* grower;

public:
    Gardener(const std::string& name);
    void getGrower(Grower* g);
    FlowersBouquet* prepareBouquet(const std::vector<std::string>& bouquet);
};


