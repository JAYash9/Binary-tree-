#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int arr[n] = {12, 15, 7, 5};
    int mini;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
        
    }
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}