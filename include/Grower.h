#pragma once
#define GROWER_H

#include <vector>
#include <string>

#include "FlowersBouquet.h"

#include "Person.h"
class Gardener; // Forward declaration of Gardener 
class Wholesaler; // Forward declaration of Wholesaler

class Grower :public Person {
private:
    Gardener* gardener;
    Wholesaler* wholesaler; 

public:
    explicit Grower(const std::string& name, Gardener* gardener);
    void getWholesaler(Wholesaler* w);
    FlowersBouquet* prepareOrder(const std::vector<std::string>& bouquet);
};


