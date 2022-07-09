#include <iostream>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Tests/Doctor.h"
#include "Tests/Hospital.h"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    std::cout << "AED 2021/2022 - Teste 2 2018" << std::endl;
    return RUN_ALL_TESTS();
}