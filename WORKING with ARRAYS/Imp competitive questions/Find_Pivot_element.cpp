#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] > arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}

int main()
{
    int arr[9] = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    cout << findPivot(arr, 9);
    return 0;
}