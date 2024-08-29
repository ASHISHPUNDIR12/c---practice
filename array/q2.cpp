// Write a program that finds the sum of all elements in an array.

#include<iostream>
using namespace std ; 
int main (){
    int sum = 0 ; 
    int arr[] = {10 , 20 , 30 , 50 } ;
    int arrSize = sizeof(arr) / sizeof(arr[0]) ; 
    for ( int i= 0 ; i < arrSize ; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl ; 
    return 0 ; 
}