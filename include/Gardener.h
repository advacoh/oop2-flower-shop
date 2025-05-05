#pragma once
#define GARDENER_H



#include <vector>
#include <string>
#include "FlowersBouquet.h"  // Assuming FlowerBouquet is defined here
#include "Person.h"          // Include the header where Person is defined

class Gardener:public Person {

public:
    Gardener(const std::string& name);
    FlowersBouquet* prepareBouquet(const std::vector<std::string>& bouquet);
};


