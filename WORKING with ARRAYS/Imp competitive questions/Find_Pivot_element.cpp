// Find pivot element in the array
// Pivot eleemnt--> In a sorted reversed array the min element or
// the element  at whiich graph is at lowest position

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

// WITHOUT USING BINARY SEARCH ------->
/*

#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int n)
{
    int l = -1;
    int i = 1;
    while (i < (n-1))
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            l = arr[i];
            break;
        }
        else
        {
            i++;
        }
    }
    return l;
}
int main()
{
    int arr[9] = {6, 7, 8, 9, 2, 3, 4, 56, 6};
    cout << "The Pivot element is:  " << findPivot(arr, 9) << endl;
    return 0;
}

*/