#include "../include/Florist.h"
#include "../include/Wholesaler.h"
#include "../include/Flower_Arranger.h"
#include "../include/Delivery_Person.h"
#include "../include/Person.h"
#include <iostream>
class Person;


Florist::Florist(const std::string& name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, Delivery_Person* deliveryPerson)
    : Person(name), wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}

void Florist::acceptOrder(Person* person, std::vector<std::string> flowerTypes) {
    std::cout << "Florist " << getName() << " forwards request to Wholesaler "<< wholesaler->getName()<< "." << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowerTypes);
    std::cout << "Florist "<< getName() <<" request flowers arrangement from Flower Arranger." <<  std::endl;
    flowerArranger->arrangeFlowers(bouquet);
    std::cout << "Florist "<< getName() <<" forwards arranged flowers to Delivery Person." << std::endl;
    deliveryPerson->acceptFlowers(bouquet);
    
}