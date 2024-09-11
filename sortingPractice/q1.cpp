// Write a C++ program to implement bubble sort on an array of integers. Test the program with a sample input and print the sorted array.
// dirty approach 
#include <iostream> 
using namespace std ; 
int main (){
     int n ; 
     cout << " enter the length of array " << endl ; 
     cin >> n ; 
    int arr[n]; 
    for (int i = 0 ; i < n ; i++  ){
        cin >> arr[i];      }
    cout << " orginal array" ; 

    for (int i = 0 ; i < n ; i++  ){
       cout << arr[i] << " ";
    }
    for (int i = 0 ; i < n ; i ++){
        for(int j = i+1 ; j < n ; j++ ){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j]) ; 
            }
        }
    }
     cout << " sorted array " << " " ;
     for (int i = 0 ; i < n ; i++  ){
        cout <<  arr[i] << " ";
    }
}

