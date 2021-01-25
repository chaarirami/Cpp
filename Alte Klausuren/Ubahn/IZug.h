/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IZug.h
 * Author: Rami Chaari
 *
 * Created on 27. Januar 2020, 11:39
 */

#ifndef IZUG_H
#define IZUG_H
enum ZugTyp {
 PUBLIC,
 TRANSPORT
};

class IZug {
public:
 virtual void enter() = 0;
 virtual void leave() = 0;
 virtual ~IZug() {};
protected:
 int passenger_count;
 ZugTyp type;
};



#endif /* IZUG_H */

