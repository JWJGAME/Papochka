#include "pch.h"
#include "../Project1/main.cpp"

TEST(IncreesVectorTest, IncreaseByPositiveNumber) {
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int n = 3;
    IncreesVector(vec, n);
    vector<int> expected = { 4, 5, 6, 7, 8 };
    ASSERT_EQ(vec, expected);
}

TEST(IncreesVectorTest, IncreaseByNegativeNumber) {
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int n = -3;
    IncreesVector(vec, n);
    vector<int> expected = { -2, -1, 0, 1, 2 };
    ASSERT_EQ(vec, expected);
}

TEST(IncreesVectorTest, IncreaseByZero) {
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int n = 0;
    IncreesVector(vec, n);
    vector<int> expected = { 1, 2, 3, 4, 5 };
    ASSERT_EQ(vec, expected);
}

int maintest(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
