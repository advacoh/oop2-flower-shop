#ifndef GARDENER_H
#define GARDENER_H

#include <vector>
#include <string>
#include "FlowersBouquet.h"  // Assuming FlowerBouquet is defined here

class Gardener {
public:
    FlowersBouquet* prepareBouquet(const std::vector<std::string>& bouquet);
};

#endif // GARDENER_H
