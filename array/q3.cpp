// Write a program that finds the maximum and minimum elements in an array.
#include <iostream> 
using namespace std ; 
int main (){
    int arr[] = {10 ,30 , 12 , 80 , 66};
    int maxElement = arr[0] ; 
    int minElement = arr[0] ; 
    for (int i = 0 ; i < 5 ; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i] ; 
            
        }
        if (arr[i] < minElement) {
            maxElement = arr[i] ; 
        }
    }
     cout << "  max element is " << maxElement << endl ;
     cout << "  min element is " << minElement << endl ;
     
    return 0 ; 
}
