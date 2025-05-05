#include "../include/Delivery_Person.h"
#include "../include/Person.h"


Delivery_Person::Delivery_Person(const std::string& name) : Person(name) {
    
}

void Delivery_Person::deliver(Person* recipient, FlowersBouquet* bouquet) {

    std::cout << "Delivery Person " << getName() << " has delivered flowers to "<< recipient ->getName() << std::endl;
    recipient->acceptFlowers(bouquet);
}
