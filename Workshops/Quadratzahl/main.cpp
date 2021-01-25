
/* 
 * File:   main.cpp
 * Author: Rami Chaari
 *
 * Created on 12. November 2019, 09:24
 */

#include <cstdlib>
#include <stdio.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *file1 = fopen("Quadrate.csv","w");
    if(file1 != NULL){
        int number = 0;
        for(int x = 0; x <= 100; x++){
            number = x*x;
            fprintf(file1,"%d;",number);
            //printf("%d;",number); //auf Konsole
        }
    }
    fclose(file1);
    return 0;
}

