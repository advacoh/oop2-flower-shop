#include "../include/Grower.h"
#include "../include/Wholesaler.h"
#include "../include/FlowersBouquet.h"
#include <iostream>
#include <vector>

Wholesaler::Wholesaler(Grower* grower) : grower(grower) {}

FlowersBouquet* Wholesaler::acceptOrder(const std::vector<std::string>& flowers) {
    std::cout << "Wholesaler forwards request to Grower" << std::endl;
    FlowersBouquet* bouquet = grower->prepareOrder(flowers);
    std::cout << "Grower returns the bouquet to the Florist" << std::endl;
    return bouquet;
}