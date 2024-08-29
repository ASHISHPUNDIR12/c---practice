#include <iostream>
using namespace std ; 
int main (){
    cout << "enter thee number " << endl ; 
    int num ; 
    cin >> num ; 
    if (num == 0 ){
         cout << num << " is zero " << endl ; 

    } 
    else if (num > 0 ) {
        cout << num << " is positve " << endl ;
    } 
    else {
        cout << num << "is negative " << endl ; 
    }
}