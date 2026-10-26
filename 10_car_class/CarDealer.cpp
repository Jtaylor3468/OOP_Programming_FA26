#include "CarDealer.hpp"
#include <iostream>

void CarDealer::addCar(const Car& car) {
    inventory.push_back(car);
}

void CarDealer::showInventory() const {
    for (int i = 0; i < inventory.size(); i++) {
        std::cout << "Car #" << i + 1 << std::endl;
        std::cout << "---------------------------\n";
        inventory[i].printInfo();

    }

    std::cout << "Total Cars: " << inventory.size() << std::endl;
}; 