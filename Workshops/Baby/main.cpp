 
/* 
 * File:   main.cpp
 * Author: Rami Chaari
 *
 * Created on 8. Oktober 2019, 10:06
 */
// #include "gtest/gtest.h"
#include <cstdlib>
#include "baby.h"
#include "FSMbaby.h"
#include <iostream>

using namespace std;

/* TEST(main, example){
    EXPECT_EQ(1,1);
} */

int main(void) {
    /*::testing::InitGoogleTest();
    int result = RUN_ALL_TESTS();
    */
    string command;
    Baby baby0("Kilian", 2);
    FSMbaby fsmbaby(baby0);
    while(1){
    cout <<"Bitte Zustand eingeben:" << endl;
    cin >> command;
    fsmbaby.evalState(command);
    }
    return 0;
}

