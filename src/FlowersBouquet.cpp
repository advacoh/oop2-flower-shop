
#include "../include/FlowersBouquet.h"
#include <iostream>
#include <vector>
FlowersBouquet::FlowersBouquet(const std::vector<std::string>& bouquet) : bouquet(bouquet), is_arranged(false) {}
void FlowersBouquet::arrange() {
    is_arranged = true;
    std::cout << "Flowers arranged in the bouquet." << std::endl;
}