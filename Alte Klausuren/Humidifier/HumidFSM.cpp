
#include "HumidFSM.h"

int HumidFSM::getState(){
    return theState;
}

HumidFSM::HumidFSM(){
    theState = Idle;
}

HumidFSM::~HumidFSM() {
    
}

void HumidFSM::evaluate(int current_humidity) {
    states nextState;
    switch (theState) {
        case Idle:
            if((current_humidity => MIN) && (current_humidity <= MAX)) {
                
            }
    }
    theState = nextState;
}