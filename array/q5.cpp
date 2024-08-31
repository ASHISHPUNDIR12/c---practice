//  Write a program to initialize an array of 5 integers and print them
#include <iostream>
using namespace std ; 
int main (){
  int arr[] = {10 , 3 , 345 , 2 , 145 } ; 
  int Maxelement  = arr[0] ; 
  int secondLargeElement = arr[0]; 
  for ( int i = 0 ; i < 5 ; i ++ ){
    if(arr[i] > Maxelement) {
        Maxelement = arr[i] ;
    }
  }
  for (int i = 0 ; i < 5 ; i++) {
    if ((arr[i] > secondLargeElement && arr[i]!= Maxelement )){
        secondLargeElement = arr[i] ; 
    }
  }
  cout << Maxelement << endl ;
    cout << secondLargeElement << " is second largest element" << endl ; 
}