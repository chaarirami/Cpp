
#include "pch.h"

#include "../TellerFSM/FSMTeller.cpp"
#include "../TellerFSM/teller.cpp"

/*TEST(test1, yeah) {
	Teller teller0;
	FSMTeller fsmTeller0(teller0);
	teller0.setPancake(0);
	EXPECT_EQ(0, teller0.getPancake());
	}
	*/
 TEST(TS1, TC1) {
	Teller teller0;
	FSMTeller fsmteller0(teller0);
	teller0.setPancake(0);
	EXPECT_EQ((teller0.getPancake()), 0);
}

TEST(TS1,TC2){
	Teller teller0;
	teller0.setPancake(0);
	FSMTeller fsmteller0(teller0);
	//teller0.setPancake(0);
	fsmteller0.evaluateState("put");
	EXPECT_EQ(fsmteller0.getState(),  Gefuellt);
	fsmteller0.evaluateState("remove");
	EXPECT_EQ(fsmteller0.getState(), Leer);
}

/*TEST(TS1, TC2) {
	EXPECT_EQ(1, 1);
}*/