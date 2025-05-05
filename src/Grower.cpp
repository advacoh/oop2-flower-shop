#include "../include/Gardener.h"
#include "../include/FlowersBouquet.h"
#include "../include/Grower.h"
#include "../include/Person.h"
#include <iostream>
#include <vector>

Grower::Grower(const std::string& name, Gardener* gardener) :Person(name), gardener(gardener) {
    // Constructor implementation
}

FlowersBouquet* Grower::prepareOrder(const std::vector<std::string>& bouquet) {
    std::cout << "Grower " << getName()<< " forwards request to Gardener" << std::endl;
    FlowersBouquet* flowersBouquet = gardener->prepareBouquet(bouquet);
    std::cout << "Gardener returns the bouquet to the Wholesaler" << std::endl;
    return flowersBouquet;
}
