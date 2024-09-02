#include <iostream> 
using namespace std ;
// int evenOddChecker(int x){
//     if (x%2 == 0 )
//     {
//      cout <<  x<< " is even" << endl ; 
//     }
//     else {
//       cout << x << " is odd " << endl; 
//     }
// }
bool iseven(int x){
    return (x%2 == 0 );
}
int main (){
// int num ; 
// cout << "enter the number you want to check"<<endl;
// cin >> num ; 
// evenOddChecker(num);
        //    another approach using bool 
 int num ; 
cout << "enter the number you want to check"<<endl;
cin >> num ;
if (iseven(num))
{
    cout << num << " is even" ; 
}
else cout << num << " is odd " ;


}
