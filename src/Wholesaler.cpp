#include "../include/Grower.h"
#include "../include/Wholesaler.h"
#include "../include/FlowersBouquet.h"
#include "../include/Person.h"
#include "../include/Florist.h"
#include <iostream>
#include <vector>

Wholesaler::Wholesaler(const std::string& name, Grower* grower) :Person(name), grower(grower) {
    
}


FlowersBouquet* Wholesaler::acceptOrder(const std::vector<std::string>& flowers) {
    std::cout << "Wholesaler " << getName() << " forwards request to Grower " << grower->getName() << "." << std::endl;
    FlowersBouquet* bouquet = grower->prepareOrder(flowers);
    std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << getName() << "." << std::endl;
    return bouquet;
}