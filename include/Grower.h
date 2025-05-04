#ifndef GROWER_H
#define GROWER_H

#include <vector>
#include <string>
#include "Gardener.h"       // For Gardener
#include "FlowersBouquet.h"
#include "Flower_Arranger.h"
  

class Grower {
private:
    Gardener* gardener;

public:
    Grower(Gardener* gardener) : gardener(gardener) {}
    FlowersBouquet* prepareOrder(const std::vector<std::string>& bouquet);
};

#endif // GROWER_H
