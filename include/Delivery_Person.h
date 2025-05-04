#ifndef DELIVERY_PERSON_H
#define DELIVERY_PERSON_H
#include <vector>
#include <string>
#include "Florist.h"
#include "FlowersBouquet.h"
#include "Florist.h"

class Delivery_Person {
    private:
        std::string name;

    public:
        void orderFlowers(Florist* florist, std::vector<std::string> flowerTypes);
        void acceptFlowers(FlowersBouquet* bouquet);
    
    };
#endif 