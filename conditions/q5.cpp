#include <iostream> 
using namespace std ; 


int main (){
    char  operation ; 
    float num1 , num2 , result  ; 
    cout << " what you want to do   --> + , -  , * , / " << endl ; 
    cin >> operation  ; 
    cout << "enter two numbers " << endl ; 
    cin >> num1 >> num2 ; 
    if (operation == '+' ){
     result =  num1 + num2 ; 
    }
   else if (operation == '-' ){
     result =  num1 - num2 ; 
    }
    else if (operation == '*' ){
     result =  num1 * num2 ; 
    }
    else if (operation == '/' ){
    if(num2 != 0 ) {
         result =  num1 / num2 ;
    } 
     else {
        cout << "error cannont divisible by 0 " << endl; 
     }
    }
    cout << result << " is the final output " << endl ; 

    
}