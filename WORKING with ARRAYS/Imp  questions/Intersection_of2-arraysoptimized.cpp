// CODE to find intersection of 2 arrays which are sorted in ascending order
#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << endl;
}

int main()
{
    int arr1[6] = {1, 2, 2, 3, 4, 8};
    int arr2[8] = {1, 2, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "The elements which are common in both arrays are: ";
    intersection(arr1, arr2, n, m);

    return 0;
}