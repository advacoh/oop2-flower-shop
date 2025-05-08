
#include "../include/Person.h"

#include "../include/Florist.h"
#include "../include/FlowersBouquet.h"
#include <iostream>

static void printFlowers(const std::vector<std::string>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        std::cout << v[i];
        if (i + 1 != v.size()) std::cout << ", "; 
         
    }
}
Person::Person(const std::string& name) : name(name) {
    // Constructor implementation
}


void Person::orderFlowers(Florist* florist, Person* recipient, const std::vector<std::string>& flowers) {
    std::cout << name << " orders flowers to " << recipient->name << " from Florist " << florist->getName() << ": "; printFlowers(flowers); std::cout<< "." << std::endl;
    florist->acceptOrder(recipient, flowers);
}
void Person::acceptFlowers(FlowersBouquet* bouquet) {
    std::cout << name << " accepts the flowers: ";
    printFlowers(bouquet->getFlowers());           
    std::cout << "." << std::endl;
    delete bouquet;
    bouquet = nullptr;
}







