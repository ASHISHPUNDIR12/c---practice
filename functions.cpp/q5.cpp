//  Write a function to calculate the factorial of a number using recursion.
#include <iostream>
using namespace std ; 
int factorial(int x){
if( x==0 || x==1){
    return 1 ;
}
return  x*factorial(x-1);
}
int main (){
    int n ; 
    cout << "enter the number you want to factorial " << endl ; 
    cin >> n ; 
    int result = factorial(n);
    cout << result ; 
}