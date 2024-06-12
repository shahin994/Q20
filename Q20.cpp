#include <iostream>

int main() {
    int fuelAmount, consumptionRate;

    std::cout << "Enter the amount of fuel in the car (in liters): ";
    std::cin >> fuelAmount;

    std::cout << "Enter the fuel consumption rate (liters per 100 km): ";
    std::cin >> consumptionRate;

    int maxDistance = (fuelAmount * 100) / consumptionRate;

    if (maxDistance >= 100) {
        std::cout << "You can travel " << maxDistance << " km." << std::endl;
    } else {
        std::cout << "Warning: Low fuel! You can travel only " << maxDistance << " km." << std::endl;
    }

    return 0;
}