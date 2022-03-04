#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int n)
{
    int i = 0;

    while (i < n - i - 1)
    {
        swap(arr[i], arr[n - i - 1]);
        i++;
    }
}

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

    int array[5] = {1, 2, 3, 4, 5};
    cout << "Original array is: ";
    printArr(array, 5);

    reverse(array, 5);
    cout << "Reversed array is: ";
    printArr(array, 5);

    return 0;
}

// ANOTHER WAY

// #include <bits/stdc++.h>
// using namespace std;

// void printArr(int arr[], int size)
// {

//     // printing every element in array
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << "  ";
//     }
//     cout << endl
//          << endl;
// }
// int reverse(int array[], int n)
// {
//     int i = 0;

//     while (i < n - i - 1)
//     {
//         int a = array[i];
//         array[i] = array[n - i - 1];
//         array[n - i - 1] = a;

//         i++;
//     }
// }

// int main()
// {

//     int arr[5] = {0, 1, 2, 3, 4};
//     reverse(arr, 5);
//     cout << endl;
//     printArr(arr, 5);

//     return 0;
// }
