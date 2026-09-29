#include "pch.h"
#include "Triangle.h"

TEST(TriangleTest, PositiveSideAndHeight) {
    Triangle triangle(10.0, 5.0);
    EXPECT_DOUBLE_EQ(25.0, triangle.trianglesize());
}

TEST(TriangleTest, ZeroSideThrows) {
    EXPECT_THROW(Triangle triangle(0.0, 5.0), std::invalid_argument);
}

TEST(TriangleTest, NegativeHeightThrows) {
    EXPECT_THROW(Triangle triangle(10.0, -5.0), std::invalid_argument);
}

TEST(TriangleTest, SettersAndGetters) {
    Triangle triangle;
    triangle.setside(7.0);
    triangle.setheight(3.0);
    EXPECT_DOUBLE_EQ(7.0, triangle.getside());
    EXPECT_DOUBLE_EQ(3.0, triangle.getheight());
    EXPECT_DOUBLE_EQ(10.5, triangle.trianglesize());
}