#include <gtest/gtest.h>
#include "Apartment.h"
#include "Villa.h"

TEST(HouseTest, ApartmentTest) {
    Apartment apt("123 Main St", 3, 250000, 3, 100);
    EXPECT_EQ(apt.calculateArea(), 150);
}

TEST(HouseTest, VillaTest) {
    Villa vil("456 Country Rd", 5, 750000, 300, true);
    EXPECT_EQ(vil.calculateArea(), 650);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}