#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return e;
}

int binarySearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        { // key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

// NOT WORKING ---->

// int findPosition(int arr, int n, int k)
// {
//     int pivot = findPivot(arr, n);
//     if (k > arr[pivot])
//     {
//     }
// }

int main()
{
    int arr[9] = {7, 8, 9, 1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout << "Enter no searching for: ";
    cin >> k;

    int pivot = findPivot(arr, 9);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        cout << "INdex is: " << binarySearch(arr, pivot, n - 1, k)
             << endl;
    }

    else
    {
        cout << "INdex is: " << binarySearch(arr, 0, pivot - 1, k)
             << endl;
    }

    return 0;
}