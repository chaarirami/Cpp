*------------ Random numbers und Datei Verabeitung---------------------*

*----------------------------zaehlungen.cpp-----------------------------*

#include "Zaehlungen.h"

#define MAX 10
#define MIN 0
#define SIZE 10 //Groesse des Arrays

Zaehlungen::Zaehlungen() {
}

Zaehlungen::~Zaehlungen() {

}

int Zaehlungen::randomNumberGenerator(int min, int max) {
    int random = ((rand() % (max + 1)) + min);
    return random;
}

void Zaehlungen::writeRandomNumbers(FILE* expFile) {
    if (expFile != NULL) {
        Zaehlungen zahl;
        int random = 0;
        srand(time(0)); //um bei jedem Durchgang verschiedene Zahlen zu bekommen
        for (int i = 0; i < SIZE; i++) {
            random = zahl.randomNumberGenerator(MIN, MAX);
            fprintf(expFile, "%d;", random);
        }
    } else {
        cout << "Fehler beim Schreiben der Zahlen" << endl;
    }
}

void Zaehlungen::readFromFile(FILE* expFile) {
    if (expFile != NULL) {
        int numbers[SIZE];
        int counter = 0;
        for (int i = 0; i < SIZE; i++) {
            fscanf(expFile, "%d;", &numbers[i]);
            if (numbers[i] == 6) {
                counter++;
            }
        }
        cout << "Die Zahl 6 kommt in der Liste " << counter << " mal vor." << endl;
    } else {
        cout << "Fehler beim Lesen der Zahlen" << endl;
    }
}

void Zaehlungen::countNumbersfromFile(FILE* expFile) {
    if (expFile != NULL) {
        int numbers[SIZE];
        FILE *file2 = NULL;
        file2 = fopen("Zaehlungen.txt", "w");
        for (int i = 0; i < SIZE; i++) { //um die Daten auszulesen
            fscanf(expFile, "%d;", &numbers[i]);
        }
        for (int i = 0; i < SIZE +1; i++) {
            int counter = 0;
            for (int j = 0; j < MAX; j++) {
                if (numbers[j] == i) {
                    counter++;
                }

            }
            if (file2 != NULL) {
                fprintf(file2, "%d mal die %d;\n", counter, i);
            } else {
                cout << "Fehler beim Schreiben der Datei" << endl;
            }
        }
        fclose(file2);
    }
}

*----------------------------