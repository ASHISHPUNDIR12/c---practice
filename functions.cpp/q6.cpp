//  Write a function to check if a number is prime.
#include <iostream>
using namespace std ; 
    bool isprime(int n ){
        if(n<=1) return false ;
        if(n==2) return true ; 
        if(n%2 == 0 ) return false ; 
        
        for(int i = 3 ; i*i <=n ; i+=2){
            if (n % 2 ==0 )  return false ;
               
            
        }
    }
int main (){
    int n ; 
    cout <<" enter the num " << endl ; 
    cin >> n ; 
    
    if(isprime(n)){
        cout << n << " is prime " << endl ;

    }
    else cout << n  << " is not prime " ; 
}