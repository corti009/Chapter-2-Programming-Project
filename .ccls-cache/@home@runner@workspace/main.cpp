#include <iostream>
#include <iomanip>
#include <cmath> 

const int TOTAL_CUSTOMERS = 16500;
const double PURCHASE_PERCENTAGE = 0.15; 
const double CITRUS_PREFERENCE_PERCENTAGE = 0.58; 

int main() {
    double customersPurchasingEnergyDrinks_double;
    double customersPreferringCitrus_double;

    customersPurchasingEnergyDrinks_double = TOTAL_CUSTOMERS * PURCHASE_PERCENTAGE;
    customersPreferringCitrus_double = customersPurchasingEnergyDrinks_double * CITRUS_PREFERENCE_PERCENTAGE;

    
    int customersPurchasingEnergyDrinks = static_cast<int>(std::round(customersPurchasingEnergyDrinks_double));
    int customersPreferringCitrus = static_cast<int>(std::round(customersPreferringCitrus_double));

    std::cout << "The approximate number of customers in the survey purchasing one or more energy drinks per week: "
              << customersPurchasingEnergyDrinks << std::endl;
    std::cout << "The approximate number of customers in the survey preferring citrus-flavored energy drinks: "
              << customersPreferringCitrus << std::endl;

    return 0;
}