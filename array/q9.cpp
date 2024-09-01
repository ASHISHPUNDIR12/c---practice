// given an array , tell  if the array contains duplicates or not
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 4};
    int duplicate ;
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = arr[i];
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    cout << duplicate << "is duplicate" << endl ; 
}