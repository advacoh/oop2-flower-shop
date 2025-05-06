#include "../include/Flower_Arranger.h"
#include "../include/FlowersBouquet.h"
#include "../include/Person.h" // Ensure Person class is included
#include <iostream>
#include <vector>

FlowerArranger::FlowerArranger(const std::string& name) : Person(name) {
    
}

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) {
    bouquet->arrange(); 
    std::cout << "Flower Arranger " << getName() << " returns arranged flowers to..." << std::endl;
}