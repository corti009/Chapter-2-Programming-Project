#include <iostream>
#include <iomanip>

const double TANK_GALLONS = 20.0;
const double MPG_TOWN = 23.5;
const double MPG_HIGHWAY = 28.9;

int main() {
    double distanceTown;
    double distanceHighway;

    distanceTown = TANK_GALLONS * MPG_TOWN;
    distanceHighway = TANK_GALLONS * MPG_HIGHWAY;

    std::cout << std::fixed << std::setprecision(1);

    std::cout << "The car can travel " << distanceTown << " miles on one tank of gas when driven in town." << std::endl;
    std::cout << "The car can travel " << distanceHighway << " miles on one tank of gas when driven on the highway." << std::endl;

    return 0;
}