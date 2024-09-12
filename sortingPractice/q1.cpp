// Write a C++ program to implement bubble sort on an array of integers. Test the program with a sample input and print the sorted array.
// optimized approach 
#include <iostream> 
using namespace std ; 
int main (){
     int n ; 
     cout << " enter the length of array " << endl ; 
     cin >> n ; 
    int arr[n]; 
    for (int i = 0 ; i < n ; i++  ){
        cin >> arr[i];      }
    cout << " orginal array :" ; 

    for (int i = 0 ; i < n ; i++  ){
       cout << arr[i] << " ";
    }
   
    for (int i = 0 ; i < n-1 ; i ++){
         bool flag = true  ; 
        for(int j = 0 ; j < n-1-i ; j++ ){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]) ; 
                flag = false ; 
            }
        }
        if (flag ){
            break ; 
        }
    }
     cout << " sorted array :" << " " ;
     for (int i = 0 ; i < n ; i++  ){
        cout <<  arr[i] << " ";
    }
}                                                                                                                     

