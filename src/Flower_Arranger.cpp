#include "../include/Flower_Arranger.h"
#include "../include/FlowersBouquet.h"
#include <iostream>
#include <vector>

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
    std::cout << "Flower Arranger arranges the flowers in the bouquet" << std::endl;
    bouquet->arrange(); // Assuming this is how you mark the bouquet as arranged
    std::cout << "Flower Arranger returns the arranged bouquet" << std::endl;
}