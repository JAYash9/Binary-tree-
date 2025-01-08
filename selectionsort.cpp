// selection sort
#include <iostream>

using namespace std;
void selectionsort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}
int main()
{
    int n = 5;
    int arr[n] = {4, 8, 15, 12, 7};
    selectionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
cout<<endl;
    return 0;
}