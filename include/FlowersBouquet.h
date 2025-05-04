#ifdef FlowersBouquet_h
#define FlowersBouquet_h
#include <vector>
#include <string>

class FlowersBouquet {
    private:
        vector<std::string> bouquet;

    public:
        bool is_arranged;
        void arrange();
};
#endif