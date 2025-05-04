#ifndef WHOLESALER_H
#define WHOLESALER_H

#include <vector>
#include <string>
#include "Grower.h"         // For Grower
#include "FlowersBouquet.h"  // For FlowerBouquet

class Wholesaler {
private:
    Grower* grower;

public:
    FlowersBouquet* acceptOrder(const std::vector<std::string>& flowers);
};

#endif // WHOLESALER_H
