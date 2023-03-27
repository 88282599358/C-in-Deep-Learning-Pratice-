#include<iostream>
#include <string>
using namespace std;
int main()
{
//    int aas[4]={4,5,6,8};
//    cout << aas[0];

//    string car[6]= {"Legender","Vitara Breeza","Scorpio","Thar","Roll Royce","Lamboghini"};
//    for (int i=0; i<6; i++){
//    cout << i << " = " <<car[i] << "\n";
//    }

//    string car[6];
//    car[0] = {"Legender"};
//    car[1] = {"Vitara Breeza"};
//    car[2] = {"Scorpio"};
//    car[3] = {"Thar"};
//    car[4] = {"Roll Royce"};
//    car[5] = {"Lamboghini"};
//    for (int i=0; i<6; i++){
//    cout << i << " = " <<car[i] << "\n";
//    }




            //elements in an array, using a "for-each loop":
//    int myNumber[5] = {10,20,30,40,50};
//    for (int i : myNumber){
//        cout << i << "\n";
//    }



//C++ Multi-Dimensional Arrays-------------------------------------------------------------------------

//int a[5][6] = {{5,6,8,9,3},{8,5,2,0,1,4}};
//cout << a[1][3];


//string letters[2][4] = {
//    { "A", "B", "C", "D" },
//    { "E", "F", "G", "H" }
//  };
//  letters[1][1] = "Hello";
//  letters[1][2] = "World";
//  letters[1][3] = "Sachin";
//
//  cout << letters[1][1] << "\t";
//  cout << letters[1][2] << "\t";
//  cout << letters[1][3] << "\t";

string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
  };
  for (int i=0; i<2; i++){
    for (int j=0; j<4; j++){
        cout << letters[i][j] << "\n";
    }
  }



    return 0;
}
