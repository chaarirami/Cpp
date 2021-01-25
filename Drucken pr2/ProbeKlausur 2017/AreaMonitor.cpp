/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AreaMonitor.cpp
 * Author: chabi
 * 
 * Created on 13. Januar 2020, 17:24
 */

#include "AreaMonitor.h"

AreaMonitor::AreaMonitor() {
}

AreaMonitor::AreaMonitor(const AreaMonitor& orig) {
}

AreaMonitor::~AreaMonitor() {
}

void AreaMonitor::setmonitor(IDispatcher* dispatcher) {
    this->dispatch = dispatcher;
    dispatcher->evaluate(data);

}

