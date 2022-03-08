// Given an array sorted in ascending order
// find the first and last occurenece of the no provided by the user!
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[7] = {0, 1, 3, 3, 3, 3, 4};
    cout << endl;
    cout << "First occurence of 3 is at index: " << firstOcc(arr, 7, 3)
         << endl;

    cout << "Last occurence of 3 is at index: " << lastOcc(arr, 7, 3)
         << endl;

    // if u want to find how many times the given number
    // came in the array the CODE is
    cout << "The number occured in the array: "
         << (lastOcc(arr, 7, 3) - firstOcc(arr, 7, 3)+1) << " times"
         << endl
         << endl;

    return 0;
}