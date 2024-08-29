#include <iostream> 
using namespace std ;
int main () {
    int n ; 
    cout << " enter the length of array " << endl ;;
    cin >> n ; 
     int arr[n] ; 
     cout << "enter the elements of arry" << endl ; 
     for ( int i = 0 ; i < n ; i ++ ){
        
        cin >> arr[i] ; 

     }
    //  reverse the element 
    
    for (int i = 0 ; i < n / 2 ; i++ ) {
       int  temp = arr[i] ;
        arr[i] = arr[n - i -  1 ] ; 
        arr[n-i-1] = temp;
    }
    for (int  i = 0; i < n; i++){
        cout << arr[i] << "    ";
    }
    
    return 0 ; 
      

}

