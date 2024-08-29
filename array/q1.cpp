//  Write a program to initialize an array of 5 integers and print them
#include <iostream>
using namespace std ; 
int main (){
   int numArr[5]  = {1 , 2 ,3 ,4  , 5 } ;
    int size = sizeof(numArr) / sizeof(numArr[0]);
    for (int i = 0 ; i < size ; i++ ){
        cout << numArr[i];
    }

}