// find the doublet in the Array whose sum  is equal to the given value x ;

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the length of array ; " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the  elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    int x;
    cout << " enter the target " << endl;
    cin >> x;
    int resultArr[2];
     bool flag = true ; 
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (x == arr[i] + arr[j])
            {
                resultArr[0] = arr[i];
                resultArr[1] = arr[j];
                flag = false ; 
                break ;
                
            }
        }
        if (flag == false) break ;
    }
    for (int i = 0 ; i < 2 ; i++ ){
        cout << resultArr[i] << "  "  ; 
        
    }
}