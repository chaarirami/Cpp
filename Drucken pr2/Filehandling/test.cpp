

#include "gtest/gtest.h"
#include "DataManagement.h"

TEST (TS1, TC1){
    
    const char* name = "Quadrate.cvs";

//    DataManagement myData;
//    myData.writetoFile(name);
       
     // Auslesen einer Datei. Inhalt in einen Array abspeichern.
    FILE *exampleFile = NULL;
    exampleFile = fopen(name, "r"); // Datei oeffnen zu lesen. Modus "r" für readable.
    const int MAX = 7;
    int myArray[MAX] = {0};
    int i = 0;
    if (exampleFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(exampleFile) && i <= MAX) {   // Bis Ende der Datei lesen.
            fscanf(exampleFile, "%d,", &myArray[i]); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            printf("%d: %d \n", i, myArray[i]);   // Ausgabe auf Konsole zur Kontrolle
            i++;
        }
        EXPECT_EQ(myArray[0],0);
        fclose(exampleFile);   // Datei schliessen. 
    }
    
}

TEST (TS2, TC2){
    
     const char* name = "Quadrate.cvs";
       
     // Auslesen einer Datei. Inhalt in einen Array abspeichern.
    FILE *exampleFile = NULL;
    exampleFile = fopen(name, "r"); // Datei oeffnen zu lesen. Modus "r" für readable.
    const int MAX = 7;
    int myArray[MAX] = {0};
    int i = 0;
    if (exampleFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(exampleFile) && i <= MAX) {   // Bis Ende der Datei lesen.
            fscanf(exampleFile, "%d,", &myArray[i]); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            printf("%d: %d \n", i, myArray[i]);   // Ausgabe auf Konsole zur Kontrolle
            i++;
        }
        EXPECT_EQ(myArray[4],16);
        fclose(exampleFile);   // Datei schliessen. 
    }
    
}

TEST (TS3, TC3){
    
    const char* name = "Quadrate.cvs";
       
     // Auslesen einer Datei. Inhalt in einen Array abspeichern.
    FILE *exampleFile = NULL;
    exampleFile = fopen(name, "r"); // Datei oeffnen zu lesen. Modus "r" für readable.
    const int MAX = 7;
    int myArray[MAX] = {0};
    int i = 0;
    if (exampleFile != NULL) {  // Abfangen, dass die File vorher existiert.
        while (!feof(exampleFile) && i <= MAX) {   // Bis Ende der Datei lesen.
            fscanf(exampleFile, "%d,", &myArray[i]); // Sucht nach ";" Zeichen und speichert die Eintraege in eine Array ab.
            printf("%d: %d \n", i, myArray[i]);   // Ausgabe auf Konsole zur Kontrolle
            i++;
        }
        EXPECT_EQ(myArray[7],128);
        fclose(exampleFile);   // Datei schliessen. 
    }
    
}