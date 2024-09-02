// Write a function to count the number of digits in a number....
#include <iostream>
using namespace std ; 
int checkDigit(int x){
    int count = 0 ; 
    if(x<0){
        x = -x ;
    }
    do{
        count ++ ; 
        x = x/10 ; 

    }
    while(x != 0 );
    return count ;
}
int main (){
    cout << "enter the number "<< endl ; 
    int a ; 
    cin >> a ; 
  int digitcount =   checkDigit(a);
  cout << " number of digit in " << a << "is " << digitcount ; 

}
