#include <iostream>
#include "beer.hpp"

int main() {
    Beer myBeer;
    myBeer.setAlcoholContent(5);
    std::cout << "Alcohol Content: " << myBeer.getAlcoholContent() << "%" << std::endl;
    return 0;
}
