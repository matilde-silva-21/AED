#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "funSearchProblem.h"

using testing::Eq;

TEST(test, facingsun){

}

TEST(test, squareR){

    int value1= FunSearchProblem::squareR(2);
    int value2= FunSearchProblem::squareR(3);
    int value3= FunSearchProblem::squareR(4);
    int value4= FunSearchProblem::squareR(520);
    EXPECT_EQ(1,value1);
    EXPECT_EQ(1,value2);
    EXPECT_EQ(2,value3);
    EXPECT_EQ(22,value4);


}

TEST(test, missingvalue){

    const vector<int> values{365,457,235,23,65,3,4,2,7,8,1};

    EXPECT_EQ(5, FunSearchProblem::smallestMissingValue(values));
}

TEST(test, minPages){

}
