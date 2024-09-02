// write a program to reverse an array without using any external array 
#include <iostream> 
using namespace std ; 
int main () {
    // int arr[] = {10 , 20 , 30 , 40 , 50 } ;
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for (int i = 0 ; i < n/2 ; i++){
    //     int temp = arr[i];
    //     arr[i] = arr[n-1-i];
    //     arr[n-1-i] = temp;
    // } 
    // for (int i = 0 ; i<n ; i++){
    //     cout << arr[i] << " " ; 
    // } 
    // second approach to solve this problem 

     int arr[] = {10 , 20 , 30 , 40 , 50 } ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0  , j = n-1;
    for (int i = 0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    while (i<j){
        swap(arr[i] , arr[j]);
        i++ ; 
        j-- ; 

    } 
    for (int i=0; i<n; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

