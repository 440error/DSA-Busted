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

int main()
{

    int arr[4] = {1, 2, 34, 54};
    int arr2[7] = {};
    for (int i = 0; i < 4; i++)
    {
        arr2[i] = arr[i];
    }

    printArr(arr2,4);
        // arr[0] = 1;
        // cout << "array 0: " << arr[0] << endl;
        return 0;
}