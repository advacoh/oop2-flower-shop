#pragma once
#define GROWER_H

#include <vector>
#include <string>
#include "Gardener.h"       // For Gardener
#include "FlowersBouquet.h"

#include "Person.h"
  

class Grower :public Person {
private:
    Gardener* gardener;

public:
    explicit Grower(const std::string& name, Gardener* gardener);
    FlowersBouquet* prepareOrder(const std::vector<std::string>& bouquet);
};


