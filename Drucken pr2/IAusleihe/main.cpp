/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chabi
 *
 * Created on 3. Dezember 2019, 10:19
 */

#include <cstdlib>
#include "Artikel.h"
#include "Kunde.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Artikel art;
    Kunde k;
    k.onlineOffline(art);
    
    
    return 0;
}

