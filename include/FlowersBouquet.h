#pragma once
#define FLOWERS_BOUQUET_H
#include <vector>
#include <string>
#include <iostream>


class FlowersBouquet {
    private:
        std::vector<std::string> bouquet;

    public:
        FlowersBouquet(const std::vector<std::string>& bouquet);
        bool is_arranged;
        void arrange();
        const std::vector<std::string>& getFlowers() const { return bouquet; }
};

