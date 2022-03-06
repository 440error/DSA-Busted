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

        // go to right wala part
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

int findPosition(int array, int n, int k)
{
    int pivot = findPivot(array, n);
    if (k > array[pivot])
    {
    }
}

int main()
{
    int arr[9];
 int pivot = findPivot(arr, 9);
    return 0;
}