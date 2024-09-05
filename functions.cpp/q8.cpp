//  Write a function to check if a string is a palindrome.
#include <iostream >
#include <string >

using namespace std ;   
bool ispalidrome(string a ){
    int start =  0 ; 
    int end = a.length() - 1 ; 
    while (start < end ){
        if(a[start] != a[end]){
            return false ;
        }
        start ++ ; 
        end -- ; 
    }
    return true ;

}                                                                                                               
int main () {
    string  n ; 
    cout << "enter the string " << endl ;
    cin >> n ; 
   if(ispalidrome(n)){
    cout << n << " is a palidrome " << endl ; 
   }
   else cout << n  << " is not palidrome " << endl; 

} 