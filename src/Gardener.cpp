#include "../include/FlowersBouquet.h"
#include <iostream>
#include <vector>
#include "../include/Gardener.h"

FlowersBouquet* Gardener::prepareBouquet(const std::vector<std::string>& bouquet) {
    std::cout << "Gardener prepares the bouquet" << std::endl;
    FlowersBouquet* flowersBouquet = new FlowersBouquet(bouquet);
    std::cout << "Gardener returns the bouquet to the grower" << std::endl;
    return flowersBouquet;
}