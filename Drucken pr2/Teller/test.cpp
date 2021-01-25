/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "gtest/gtest.h"
#include "FSMTeller.h"
#define NEUN 9

TEST(Test, test){
    
    FSMTeller t;
    EXPECT_EQ(t.getState(),0);      //Zustand Leer
    
    t.evalStates("put");
    EXPECT_EQ(t.getState(),1);      //Zustand Gefüllt
    
    for(int i = 1; i<=NEUN; i++){
        t.evalStates("put");
    }
    EXPECT_EQ(t.getState(),2);      //Zustand Voll
    
}

TEST(Test, test1){
    
    Teller t1(3);
    t1.put();
    EXPECT_EQ(t1.getPanckakeNum(),1);
    t1.put();
    EXPECT_EQ(t1.getPanckakeNum(),2);
    
}