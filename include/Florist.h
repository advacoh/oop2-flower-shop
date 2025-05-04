#include <vector>
#include <string>
#ifndef FLORIST_H
#define FLORIST_H
#include "Wholesaler.h"
#include "Flower_Arranger.h"
#include "Delivery_Person.h"
#include "FlowersBouquet.h"


class Florist {
    private:
        Wholesaler* wholesaler;
        FlowerArranger* flowerArranger;
        Delivery_Person* deliveryPerson;

    public:
        Florist(Wholesaler* wholesaler, FlowerArranger* flowerArranger, Delivery_Person* deliveryPerson)
            : wholesaler(wholesaler), flowerArranger(flowerArranger), deliveryPerson(deliveryPerson) {}
        void acceptOrder(Person* person, std::vector<std::string> flowerTypes);
};
#endif 