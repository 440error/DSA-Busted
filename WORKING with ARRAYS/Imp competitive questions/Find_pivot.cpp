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