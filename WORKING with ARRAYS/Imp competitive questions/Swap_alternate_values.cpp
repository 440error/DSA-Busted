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

int alternate(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
    }
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    cout << "Original array is: ";
    printArr(array, 4);

    cout << "New array is: ";
    alternate(array, 4);
    printArr(array, 4);

    return 0;
}