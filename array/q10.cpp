#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / 4;
    int arr2[n];
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
}