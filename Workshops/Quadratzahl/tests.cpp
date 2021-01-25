#include <gtest/gtest.h>
#include <iostream>

using namespace std;

class QuadratzahlTest : public::testing::Test {
protected:
    int var[100];
    QuadratZahl();
    virtual void SetUp() {
        FILE *file1 = fopen("Quadrate.csv", "r");
        //int var[100];
        if (file1 != NULL) {
            for (int i = 0; i <= 100; i++) {
                fscanf(file1, "%d;", &var[i]);
                //cout << " i: " << var[i]  << endl;
            }
        }
        fclose(file1);
    }
    virtual void TearDown(){
        
    }

};

//QuadratzahlTest::QuadratzahlTest() {
//    FILE *file1 = fopen("Quadrate.csv", "r");
//    //int var[100];
//    if (file1 != NULL) {
//        for (int i = 0; i <= 100; i++) {
//            fscanf(file1, "%d;", &var[i]);
//            //cout << " i: " << var[i]  << endl;
//        }
//    }
//    fclose(file1);
//}

//TEST_F(QuadratzahlTest, TC1) {
//    //    FILE *file1 = fopen("Quadrate.csv", "r");
//    //    int var[100];
//    //    if (file1 != NULL) {
//    //        for (int i = 0; i <= 100; i++) {
//    //            fscanf(file1, "%d;", &var[i]);
//    //            cout << " i: " << var[i]  << endl;
//    //        }
//    //    }
//    //    fclose(file1);
//    EXPECT_EQ(QuadratzahlTest.var[50], 2500);
//    EXPECT_EQ(QuadratzahlTest.var[0], 0);
//    EXPECT_EQ(QuadratzahlTest.var[50], 2500);
//}

TEST(TS1, TC2) {

}

TEST(TS1, TC3) {

}

