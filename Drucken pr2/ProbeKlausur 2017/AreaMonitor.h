/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AreaMonitor.h
 * Author: chabi
 *
 * Created on 13. Januar 2020, 17:24
 */

#ifndef AREAMONITOR_H
#define AREAMONITOR_H
#include <stdio.h>


#include "IDispatcher.h"

using namespace std;

class AreaMonitor  {
public:
    AreaMonitor();
    AreaMonitor(const AreaMonitor& orig);
    virtual ~AreaMonitor();
    void setmonitor(IDispatcher* disatch);
private:
    int data;
    IDispatcher *dispatch = NULL;

};

#endif /* AREAMONITOR_H */

