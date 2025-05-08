
#pragma once
#define FLORIST_H
#include "Person.h"
class Wholesaler;
class FlowerArranger;
class Delivery_Person;

class Florist :public Person {
    private:
        
        Wholesaler* wholesaler;
        FlowerArranger* flowerArranger;
        Delivery_Person* deliveryPerson;

    public:
        explicit Florist(const std::string& name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, Delivery_Person* deliveryPerson);
        virtual ~Florist(); 
        void acceptOrder(Person* person, std::vector<std::string> flowerTypes);
};
