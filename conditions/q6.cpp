// Write a program that categorizes a given grade (A, B, C, D, F) based on a numeric score.

#include <iostream>
using namespace std ; 
int main (){
    int marks ; 
    cout << " enter the marks out of 100  " << endl ; 
    cin >> marks ; 
    if (marks >= 90  && marks <= 100  ) {
        cout << "you got A grade " ; 
    }
     else if ( marks >=80 && marks <= 90  ){
        cout << "you got B grade " ;
     }
     else if (marks >= 70 && marks <= 80 ){
        cout << " you got c grade " ; 
     }
}
