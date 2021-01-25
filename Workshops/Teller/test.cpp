/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "\PR2\VisualStudio\TellerFSM\packages\Microsoft.googletest.v140.windesktop.msvcstl.static.rt-dyn.1.8.1\build\native\include\gtest\gtest.h"

#include "FSMTeller.h"

TEST(TS1,TC1){
    Teller teller0;
    FSMTeller fsmteller0(teller0);
    teller0.setPancake(0);
    EXPECT_EQ((teller0.getPancake()), 0);
}

TEST(TS1,TC2){
    Teller teller0;
    FSMTeller fsmteller0(teller0);
    teller0.setPancake(0);
    fsmteller0.evaluateState("put");
    EXPECT_EQ(fsmteller0.getState(),  Gefuellt);   
    fsmteller0.evaluateState("remove");
    EXPECT_EQ(fsmteller0.getState(), State::Leer);
}