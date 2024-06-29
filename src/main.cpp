#include <iostream>
#include "Apartment.h"
#include "Villa.h"
#include "HouseFactory.h"

int main() {
    House* myApartment = HouseFactory::createHouse("Apartment", "123 Main St", 3, 250000);
    House* myVilla = HouseFactory::createHouse("Villa", "456 Country Rd", 5, 750000);

    myApartment->displayInfo();
    myVilla->displayInfo();

    delete myApartment;
    delete myVilla;

    return 0;
}