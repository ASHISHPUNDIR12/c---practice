// Write a function to return the maximum of two numbers.

#include <iostream>
using namespace std ;
int maX(int a , int b ){
   if (a > b ) return a ;
   else return b ;
    
}

int main (){
    // using predefiend functions 
    int a , b ;
    cout << "enter two numbers " << endl ;
    cin >> a >> b ;
//    cout <<  max(a , b) << " is maximum elements ";
// another method 
cout << maX(a, b );

}