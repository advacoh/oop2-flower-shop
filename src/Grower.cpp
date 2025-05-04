#include "../include/Gardener.h"
#include "../include/FlowersBouquet.h"
#include "../include/Grower.h"
#include <iostream>
#include <vector>

Grower::Grower(Gardener* gardener) : gardener(gardener) {}

FlowersBouquet* Grower::prepareOrder(const std::vector<std::string>& bouquet) {
    std::cout << "Grower forwards request to Gardener" << std::endl;
    FlowersBouquet* flowersBouquet = gardener->prepareBouquet(bouquet);
    std::cout << "Gardener returns the bouquet to the Florist" << std::endl;
    return flowersBouquet;
}
