/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "gtest/gtest.h"
#include "HumidFSM.h"

TEST(Test, test){
    Humidifier humid;
    HumidFSM myFSM;
    IDispatcher *ptr = NULL;
    ptr = &myFSM;    
    
    EXPECT_EQ(myFSM.getState(), IDLE);
    
    int data = 1;
    ptr->evaluate(data);
    EXPECT_EQ(myFSM.getState(), BEFEUCHTEN);
    data = 15;
    ptr->evaluate(data);
    EXPECT_EQ(myFSM.getState(), NORMALBETRIB);
    data = 25; 
    ptr->evaluate(data);
    EXPECT_EQ(myFSM.getState(), ENTFEUCHTEN);
    
}
