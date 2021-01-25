

#include "baby.h"

Baby::Baby(string name, float alter){
    this->name = name;
    this->alter = alter;
}

void Baby::weinen(){
    printf("Das Baby weint\n");
}

void Baby::trinken(){
    printf("Das Baby trinkt\n");
}

void Baby::schlafen(int dauer){
    printf("Das Baby schläft für %i \n", dauer);
}

Baby::~Baby(){
    
};