#ifndef APARTMENT_H
#define APARTMENT_H

#include "House.h"

class Apartment : public House {
private:
    int floorNumber;
    double maintenanceFee;

public:
    Apartment(const std::string& addr, int rooms, double pr, int floor, double fee)
        : House(addr, rooms, pr), floorNumber(floor), maintenanceFee(fee) {}

    double calculateArea() const override {
        return numberOfRooms * 50;
    }

    void displayInfo() const override {
        std::cout << "Apartment at " << address << " with " << numberOfRooms
            << " rooms on floor " << floorNumber << ". Price: $" << price << std::endl;
    }

    void prepareForSale() const override {
        std::cout << "Preparing apartment for sale: Clean common areas, arrange viewing schedule." << std::endl;
    }
};