// count the number of elements un given array greater than a given number 
#include <iostream>
using namespace std  ; 
int main (){
     int x ; 
     int  count = 0 ; 
    int arr[]= {1 , 23 ,4 , 345 , 5 ,6}; 
    cout << "enter the target " << endl  ; 
     cin >> x ;
     for (int i = 0 ; i < 6 ; i++){
        if (arr[i] > x )
        {
            count ++;
        }
     } 
      cout << "there are " << count << " no of elments greater than " << x << "inside a array" ; 
}   