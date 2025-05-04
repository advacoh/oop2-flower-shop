#include "../include/Florist.h"
#include "../include/Wholesaler.h"
#include "../include/Flower_Arranger.h"
#include "../include/Delivery_Person.h"
#include "../include/Person.h"
#include <iostream>


Florist::Florist(Wholesaler* wholesaler, FlowerArranger* flowerArranger, Delivery_Person* deliveryPerson)
    : wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}

void Florist::acceptOrder(Person* person, std::vector<std::string> flowerTypes) {
    std::cout << "Florist forwards request to Wholesaler " << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowerTypes);
    std::cout << "Florist "<< " request flowers arrangement from Flower Arranger" <<  std::endl;
    flowerArranger->arrangeFlowers(bouquet);
    std::cout << "Florist forwards arranged flowers to Delivery Person" << std::endl;
    deliveryPerson->acceptFlowers(bouquet);
    
}