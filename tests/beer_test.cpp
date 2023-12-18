#include "gtest/gtest.h"
#include "beer.hpp"

TEST(BeerTest, AlcoholContent) {
    Beer beer;
    beer.setAlcoholContent(5);
    EXPECT_EQ(beer.getAlcoholContent(), 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
