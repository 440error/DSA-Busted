#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int arr2[], int size1, int size2)
{
    // int ans;
    for (int i = 0; i < size1; i++)
    {
        int j = 0;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                // ans += arr1[i];
                arr2[j] == INT_MIN;
                break;
            }
        }
    }
    // return ans;
}

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[7] = {1, 7, 8, 9, 3, 44, 4};
    intersection(arr1, arr2, 5, 7);
    // cout << "INtersection: " << intersection(arr1, arr2, 5, 7) << endl;

    return 0;
}
