/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chabi
 *
 * Created on 17. Januar 2020, 11:24
 */

#include <gtest/gtest.h>
#include <cstdlib>
#include "FSMKind.h"

using namespace std;

TEST(Gtest, zustaende){
     FSMKind fsm;
     EXPECT_EQ(fsm.getState(), 0);
     fsm.evaluate("kuessen");
     EXPECT_EQ(fsm.getState(), 1);
     fsm.evaluate("unterhalten");
     EXPECT_EQ(fsm.getState(), 1);
     fsm.evaluate("veraergern");
     EXPECT_EQ(fsm.getState(), 2);
     fsm.evaluate("kuessen");
     EXPECT_EQ(fsm.getState(), 0);
    
     
}

int main(int argc, char** argv) {
    FSMKind fsm;
    int erg = RUN_ALL_TESTS();
    string command; 

           while (true) {          // Immerwieder nachfragen, was Baby machen soll.
                  cout << "\n Geben sie kuessen, veraergern oder unterhalten ein : " << endl;
                  cin >> command;
              fsm.evaluate(command);   // Evaluierungslogik der FSM in der Schleife aufrufen.  
            }    


    return 0;
}

