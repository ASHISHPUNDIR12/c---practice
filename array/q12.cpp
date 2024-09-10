// find the element x in  the array . take array and x as input 
 #include <iostream> 
 using namespace std ; 
 int main (){
    int x ; 
    int arr[] = {1 ,3 , 4  , 4 , 2356 , 234 , 2 } ; 
       int size = sizeof(arr) / sizeof(arr[0]);
    cout << "enter the target " << endl ; 
    cin >> x ; 
    bool flag = false ; //it means not present 
    for (int i = 0 ; i<size ; i++) {
    if (arr[i]== x ){
        flag = true ;
        break ; 
    }
 }
 if (flag == true ) {
    cout << x << "is  present" << endl ; 
 }
 else {
    cout << x << "  is not present " ;
 }
 }