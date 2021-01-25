/* 
 * File:   Baby.h
 * Author: dai
 *
 * Created on 8. Oktober 2019, 11:08
 */

# include <string>
using namespace std;

#ifndef BABY_H
#define BABY_H

class Baby {
public:
    Baby();  
    Baby(string, float); 
    ~Baby();             
    
    void weinen();
    void trinken();
    void schlafen(int Dauer);
    
private:
    string name;
    float alter;
};


#endif /* BABY_H */

