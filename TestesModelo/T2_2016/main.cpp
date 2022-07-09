#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Tests/Article.h"
#include "Tests/Purchase.h"
#include "Tests/AfterSalesService.h"


int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    std::cout << "AED 2021/2022 - Aula Pratica 4" << std::endl;
    return RUN_ALL_TESTS();
}


