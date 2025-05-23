#include "../include/Person.h"
#include "../include/FlowersBouquet.h"
#include "../include/Florist.h"
#include "../include/Flower_Arranger.h"
#include "../include/Delivery_Person.h"
#include "../include/Gardener.h"
#include "../include/Grower.h"
#include "../include/Wholesaler.h"
#include "../include/Person.h"
#include "../include/FlowersBouquet.h"
#include "../include/Florist.h"
#include <vector>
#include <string>
//building the project: g++ -std=c++17 -Iinclude src/*.cpp -o main.exe
// running the project: ./main.exe
int main() {
    // leaf actors
    Gardener gardener("Garrett");
    Grower   grower("Gray", &gardener);
   
    Wholesaler wholesaler("Watson", &grower);
    
    FlowerArranger arranger("Flona");
    Delivery_Person courier("Dylan");

    // florist who coordinates
    Florist florist("Fred", &wholesaler, &arranger, &courier);

    // two ordinary people
        Person chris("Chris");
        Person robin("Robin");

    std::vector<std::string> flowers = {"Roses", "Violets", "Gladiolus"};
    chris.orderFlowers(&florist, &robin, flowers);

    return 0;
}
