
#include "../include/Person.h"

#include "../include/Florist.h"
#include "../include/FlowersBouquet.h"
#include <iostream>

Person::Person(const std::string& name) : name(name) {
}
void Person::orderFlowers(Florist* florist, Person* recipient, const std::vector<std::string>& flowers) {
    std::cout << name << " orders flowers to " << recipient->name << " from Florist: " << &flowers << std::endl;
    florist->acceptOrder(this, flowers);
}
void Person::acceptFlowers(FlowersBouquet* bouquet) {
     std::cout << name << " accepts flowers: " << &bouquet << std::endl;
}


