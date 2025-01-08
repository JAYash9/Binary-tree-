// selection sort
#include <bits/stdc++.h>

using namespace std;
void insertionsort(int arr[],int n){
    for (int  i = 0; i <= n-1; i++)
    {
        int j=i;
        while (j>0 && arr[j-1]>arr[j])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
        
    }
    
}
void bubblesort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }
            
        }
        if(!swapped){
            break;
        }
    }
}
// void selectionsort(int arr[], int n)
// {
//     int min;
//     for (int i = 0; i < n; i++)
//     {
//         min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         swap(arr[min], arr[i]);
//     }
// }
int main()
{
    int n = 5;
    int arr[n] = {4, 8, 15, 12, 7};
    // selectionsort(arr, n);
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}