#ifndef GROWER_H
#define GROWER_H

#include <vector>
#include <string>
#include "Gardener.h"       // For Gardener
#include "FlowersBouquet.h"  // For FlowerBouquet

class Grower {
private:
    Gardener* gardener;

public:
    FlowersBouquet* prepareOrder(const std::vector<std::string>& bouquet);
};

#endif // GROWER_H
