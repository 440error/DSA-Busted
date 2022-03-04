// In a array given all elements are repeated i.e all elements occur in
// the array 2 times while one elements occurs only once
// write a code to find that number!
#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl
         << endl;
}

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans ^= arr[i];
    }
    return ans;
}

int main()
{
    cout << "Array has elements: " ;
    int arr[7] = {1, 3, 3, 5, 5, 6, 1};
    printArr(arr, 7);

    cout <<"The unique number in array is "<< unique(arr, 7)
         << endl;
    return 0;
}