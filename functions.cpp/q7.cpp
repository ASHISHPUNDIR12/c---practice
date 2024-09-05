// Write a function to reverse the digits of a number.

#include <iostream >    
using namespace std ; 
int reverse(int n ){
    int reverseDigit = 0 ; 
   while (n != 0 ){
   
    int lastDigit = n%10 ;
     reverseDigit  = reverseDigit * 10 + lastDigit; 
     n = n/10 ; 

   }
   return reverseDigit  ; 
      
}
int main (){
    int n ; 
    cout << " enter the number " << endl; 
    cin >> n ;
  int result =    reverse(n);
  cout << result << endl ; 
}