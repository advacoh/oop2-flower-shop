#pragma once
#define DELIVERY_PERSON_H
#include <vector>
#include <string>
#include "Person.h" 
class FlowersBouquet;

class Delivery_Person : public Person {
    public:
        explicit Delivery_Person(const std::string& name);
        void deliver(Person* recipient, FlowersBouquet* bouquet);
    };
