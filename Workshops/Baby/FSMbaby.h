
/* 
 * File:   FSMbaby.h
 * Author: Rami Chaari
 *
 * Created on 22. Oktober 2019, 10:30
 */

#ifndef FSMBABY_H
#define FSMBABY_H
#include <cstdlib>
#include <string>
#include "baby.h"

using namespace std;

enum  Zustand{W,T,S};

class FSMbaby{
private:
    Zustand actualState;
    void changeState(Zustand);
    Baby baby;
public: 
    FSMbaby(Baby);
    FSMbaby();
    ~FSMbaby();
    void evalState(string command);
};

#endif /* FSMBABY_H */

