#include "../include/FlowersBouquet.h"
#include <iostream>
#include <vector>
#include "../include/Gardener.h"
#include "../include/Person.h"

Gardener::Gardener(const std::string& name) : Person(name) {
    
}

FlowersBouquet* Gardener::prepareBouquet(const std::vector<std::string>& bouquet) {
    std::cout << "Gardener " << getName() << "prepares the bouquet" << std::endl;
    FlowersBouquet* flowersBouquet = new FlowersBouquet(bouquet);
    std::cout << "Gardener "<< getName() << " returns the bouquet to the grower" << std::endl;
    return flowersBouquet;
}