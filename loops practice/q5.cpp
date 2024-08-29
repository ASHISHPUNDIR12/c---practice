#include <iostream>
using namespace std ; 
int main  (){
    int num , orgiginalNum ; 

    cout << " enter the number " << endl ;
    cin >> num ; 
    orgiginalNum  = num ; 
    int reverseDigit = 0 ; 
    while (num != 0 ) {
        int lastDigit = num%10 ; 
        reverseDigit = reverseDigit * 10 + lastDigit ; 
        num =   num / 10 ; 

    }
     if ( orgiginalNum  == reverseDigit ) {
        cout << orgiginalNum << " is a palidrome "<< endl ;  

     }
     
     else {
        cout << orgiginalNum  << " is not a palidrome ";
     }
      
}