#include "../include/FlowersBouquet.h"
#include <iostream>
#include <vector>
#include "../include/Gardener.h"
#include "../include/Person.h"
#include "../include/Wholesaler.h"
#include "../include/Grower.h"

Gardener::Gardener(const std::string& name) : Person(name) {
    
}
void Gardener::getGrower(Grower* g) {
    grower = g;
}


FlowersBouquet* Gardener::prepareBouquet(const std::vector<std::string>& bouquet) {
    std::cout << "Gardener " << getName() << " prepares flowers." << std::endl;
    FlowersBouquet* flowersBouquet = new FlowersBouquet(bouquet);
    return flowersBouquet;
}