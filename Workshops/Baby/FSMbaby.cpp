
#include "FSMbaby.h"
#include <iostream>

FSMbaby::FSMbaby(Baby baby){
    actualState = W;
    this->baby = baby;
};

FSMbaby::FSMBaby() {

    };


FSMbaby::~FSMbaby(){
    
};

void FSMbaby::changeState(Zustand newState){
    this->actualState = newState;
    cout<<actualState<<endl;
}

void FSMbaby::evalState(string command){
    switch(actualState){
        case W:
            cout<<"wwww"<<endl;
            if(command == "trinken"){
                changeState(T);
            }
            if (command == "schlafen"){
                changeState(S);
            }
            break;
        case T:
            cout<<"wwww"<<endl;
            if(command == "weinen"){
                changeState(W);
            }
            if (command == "schlafen"){
                changeState(S);
            }
            break;
        case S:
            cout<<"wwww"<<endl;
            if(command == "trinken"){
                changeState(T);
            }
            if (command == "weinen"){
                changeState(W);
            }
            break;  
        default:
            cout <<"no"<<endl;
            break;
    }
}