#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House {
protected:
    std::string address;
    int numberOfRooms;
    double price;

public:
    House(const std::string& addr, int rooms, double pr) : address(addr), numberOfRooms(rooms), price(pr) {}
    virtual ~House() = default;

    virtual double calculateArea() const = 0;
    virtual void displayInfo() const = 0;
    virtual double getPrice() const { return price; }

    virtual void prepareForSale() const = 0;
};