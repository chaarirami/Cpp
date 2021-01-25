/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IDispatcher.h
 * Author: chabi
 *
 * Created on 13. Januar 2020, 17:25
 */

#ifndef IDISPATCHER_H
#define IDISPATCHER_H

class IDispatcher {
public:
    virtual ~IDispatcher() {};
    virtual void evaluate(int data) = 0;
};



#endif /* IDISPATCHER_H */

