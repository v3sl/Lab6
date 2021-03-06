#include "gtest/gtest.h"
#include "functions.h"


TEST(testGetNumerator, test1){
    fraction testFraction(2,4);
    ASSERT_EQ(testFraction.GetNumerator(),2);
}

TEST(testGetNumerator, test2){
    fraction testFraction(-4,10);
    ASSERT_EQ(testFraction.GetNumerator(),-4);
}

TEST(testGetNumerator, test3){
    fraction testFraction(0,10);
    ASSERT_EQ(testFraction.GetNumerator(),0);
}

TEST(testGetDenominator, test1){
    fraction testFraction(2,3);
    ASSERT_EQ(testFraction.GetDenominator(),3);
}

TEST(testSum, test1){
    fraction testFraction(1,2);
    fraction testFraction2(1,2);
    fraction resultFraction(1,1);
    ASSERT_EQ(fraction::Sum(testFraction2,testFraction),resultFraction);
}

TEST(testSum, test2){
    fraction testFraction(1,2);
    fraction testFraction2(0,2);
    fraction resultFraction(1,2);
    ASSERT_EQ(fraction::Sum(testFraction2,testFraction),resultFraction);
}

TEST(testSum, test3){
    fraction testFraction(1,2);
    fraction testFraction2(-4,9);
    fraction resultFraction(1,18    );
    ASSERT_EQ(fraction::Sum(testFraction2,testFraction),resultFraction);
}

TEST(testMultiply, test1){
    fraction testFraction(2,3);
    fraction testFraction2(1,2);
    fraction resultFraction(2,6);
    ASSERT_EQ(fraction::Multiply(testFraction2,testFraction),resultFraction);
}

TEST(testMultiply, test2){
    fraction testFraction(2,3);
    fraction testFraction2(0,2);
    fraction resultFraction(0,6);
    ASSERT_EQ(fraction::Multiply(testFraction2,testFraction),resultFraction);
}

TEST(testMultiply, test3){
    fraction testFraction(2,3);
    fraction testFraction2(-2,5);
    fraction resultFraction(-4,15);
    ASSERT_EQ(fraction::Multiply(testFraction2,testFraction),resultFraction);
}

TEST(testDivision, test1) {
  fraction testFraction(2,3);
fraction testFraction2(1,3);
fraction resultFraction(3,6);
ASSERT_EQ(fraction::Division(testFraction2,testFraction),resultFraction);
}

TEST(testDivision, test2) {
    fraction testFraction(2,3);
    fraction testFraction2(1,3);
    fraction resultFraction(2,1);
    ASSERT_EQ(fraction::Division(testFraction,testFraction2),resultFraction);
}

TEST(testDivision, test3) {
    fraction testFraction(2,3);
    fraction testFraction2(-1,3);
    fraction resultFraction(-3,6);
    ASSERT_EQ(fraction::Division(testFraction2,testFraction),resultFraction);
}


TEST(testDivision, test4) {
    fraction testFraction(2,3);
    fraction testFraction2(-1,3);
    fraction resultFraction(-2,1);
    ASSERT_EQ(fraction::Division(testFraction,testFraction2),resultFraction);
}




