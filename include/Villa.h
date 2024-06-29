#ifndef VILLA_H
#define VILLA_H

#include "House.h"

class Villa : public House {
private:
    double gardenArea;
    bool hasSwimmingPool;

public:
    Villa(const std::string& addr, int rooms, double pr, double garden, bool pool)
        : House(addr, rooms, pr), gardenArea(garden), hasSwimmingPool(pool) {}

    double calculateArea() const override {
        return numberOfRooms * 70 + gardenArea;
    }

    void displayInfo() const override {
        std::cout << "Villa at " << address << " with " << numberOfRooms
            << " rooms and a garden of " << gardenArea << " sq.m. Price: $" << price << std::endl;
    }

    void prepareForSale() const override {
        std::cout << "Preparing villa for sale: Landscaping the garden, cleaning the pool." << std::endl;
    }
};