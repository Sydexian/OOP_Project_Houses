#ifndef HOUSEFACTORY_H
#define HOUSEFACTORY_H

#include "Apartment.h"
#include "Villa.h"

class HouseFactory {
public:
    static House* createHouse(const std::string& type, const std::string& addr, int rooms, double price) {
        if (type == "Apartment") {
            return new Apartment(addr, rooms, price, 3, 100); // Example parameters
        }
        else if (type == "Villa") {
            return new Villa(addr, rooms, price, 300, true); // Example parameters
        }
        return nullptr;
    }
};