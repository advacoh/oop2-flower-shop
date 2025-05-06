#include "../include/Gardener.h"
#include "../include/FlowersBouquet.h"
#include "../include/Grower.h"
#include "../include/Person.h"
#include "../include/Wholesaler.h"
#include <iostream>
#include <vector>

Grower::Grower(const std::string& name, Gardener* gardener) :Person(name), gardener(gardener) {
    // Constructor implementation
}
void Grower::getWholesaler(Wholesaler* w) {
    wholesaler = w;
}

FlowersBouquet* Grower::prepareOrder(const std::vector<std::string>& bouquet) {
    std::cout << "Grower " << getName() << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
    FlowersBouquet* flowersBouquet = gardener->prepareBouquet(bouquet);
    std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << getName() << "." << std::endl;
    return flowersBouquet;
}
