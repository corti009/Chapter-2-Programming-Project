#include <iostream>
#include <iomanip> // Required for std::fixed and std::setprecision

const double ANNUAL_RISE_MM = 1.5;

int main() {
    double riseIn5Years;
    double riseIn7Years;
    double riseIn10Years;

    riseIn5Years = ANNUAL_RISE_MM * 5;
    riseIn7Years = ANNUAL_RISE_MM * 7;
    riseIn10Years = ANNUAL_RISE_MM * 10;

    
    std::cout << std::fixed << std::setprecision(1);

    std::cout << "The ocean's level will be " << riseIn5Years << " millimeters higher in 5 years." << std::endl;
    std::cout << "The ocean's level will be " << riseIn7Years << " millimeters higher in 7 years." << std::endl;
    std::cout << "The ocean's level will be " << riseIn10Years << " millimeters higher in 10 years." << std::endl;

    return 0;
}