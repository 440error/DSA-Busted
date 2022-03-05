// return index of highest value in the array
#include <bits/stdc++.h>
using namespace std;

int Highest(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start; // we can also return end in place of start
}

int main()
{
    int arr[7] = {1, 3, 4, 0, 8, 6, 98};
    int ans = Highest(arr, 7);
    cout << "Highest value is at index:  " << ans << " and its value is "
         << arr[ans] << endl;
    return 0;
}