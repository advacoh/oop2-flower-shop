#pragma once
#define FLOWER_ARRANGER_H
#include <vector>
#include <string>
#include "FlowersBouquet.h"
class FlowersBouquet;
#include "Person.h" // Include the header where Person is defined

class FlowerArranger: public Person {
    public:
    FlowerArranger(const std::string& name);
    void arrangeFlowers(FlowersBouquet* bouquet);


};
