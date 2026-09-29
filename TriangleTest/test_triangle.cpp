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

TEST(TriangleTest, ConstructorNegativeSideThrows) {
    EXPECT_THROW(Triangle(-2.0, 5.0), std::invalid_argument);
}

TEST(TriangleTest, ConstructorZeroHeightThrows) {
    EXPECT_THROW(Triangle(5.0, 0.0), std::invalid_argument);
}

TEST(TriangleTest, SetSideZeroThrows) {
    Triangle triangle;
    EXPECT_THROW(triangle.setside(0.0), std::invalid_argument);
}

TEST(TriangleTest, SetSideNegativeThrows) {
    Triangle triangle;
    EXPECT_THROW(triangle.setside(-1.0), std::invalid_argument);
}

TEST(TriangleTest, SetHeightZeroThrows) {
    Triangle triangle;
    EXPECT_THROW(triangle.setheight(0.0), std::invalid_argument);
}

TEST(TriangleTest, SetHeightNegativeThrows) {
    Triangle triangle;
    EXPECT_THROW(triangle.setheight(-1.0), std::invalid_argument);
}

TEST(TriangleTest, SettersAndGetters) {
    Triangle triangle;
    triangle.setside(7.0);
    triangle.setheight(3.0);
    EXPECT_DOUBLE_EQ(7.0, triangle.getside());
    EXPECT_DOUBLE_EQ(3.0, triangle.getheight());
    EXPECT_DOUBLE_EQ(10.5, triangle.trianglesize());
}

TEST(TriangleTest, DefaultConstructorInitializesDefaults) {
    Triangle triangle;
    EXPECT_DOUBLE_EQ(1.0, triangle.getside());
    EXPECT_DOUBLE_EQ(0.75, triangle.getheight());
    EXPECT_DOUBLE_EQ(0.375, triangle.trianglesize());
}

TEST(TriangleTest, SetSideOnlyChangesSide) {
    Triangle triangle(2.0, 3.0);
    triangle.setside(4.0);
    EXPECT_DOUBLE_EQ(4.0, triangle.getside());
    EXPECT_DOUBLE_EQ(3.0, triangle.getheight());
    EXPECT_DOUBLE_EQ(6.0, triangle.trianglesize());
}

TEST(TriangleTest, SetHeightOnlyChangesHeight) {
    Triangle triangle(2.0, 3.0);
    triangle.setheight(5.0);
    EXPECT_DOUBLE_EQ(2.0, triangle.getside());
    EXPECT_DOUBLE_EQ(5.0, triangle.getheight());
    EXPECT_DOUBLE_EQ(5.0, triangle.trianglesize());
}