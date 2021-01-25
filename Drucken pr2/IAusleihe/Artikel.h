/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Artikel.h
 * Author: chabi
 *
 * Created on 3. Dezember 2019, 10:50
 */

#ifndef ARTIKEL_H
#define ARTIKEL_H

#include <string>
#include <stdio.h>

using namespace std;

class Artikel {
public:
    Artikel();
    Artikel(string, bool);
    virtual ~Artikel();
    void ausleihen();
    bool zurueckgeben();
    bool getStatus() const;
    void setStatus(bool);
   
private:
    string Name;
    bool Status;

};

#endif /* ARTIKEL_H */

