// Write a function to generate the nth Fibonacci number using recursion.
#include <iostream> 
using namespace std ;
int fib(int n){
    if (n==0) return 0 ;
    else if (n==1) return 1 ; 
    else {
        return (fib(n-1) + fib(n-2));
    }
    
    
}
int main (){
    int n ; 
    cout << " enter the n " << endl; 
    cin >> n ; 
   cout << fib(n);

}
