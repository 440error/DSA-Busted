#include <bits/stdc++.h>
using namespace std;

int pairsum(int arr[], int sum, int n)
{
    // int i=0;
    for (int i = 0; i < n; i++)
    {

        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] + arr[j] == sum)
                {
                    cout << arr[i] << arr[j] << endl;
                    break;
                }
            }
        }
    }
}

    int main()
    {

        int arr[] = {1, 2, 3, 4, 5, 3};
        int m = sizeof(arr) / sizeof(arr[0]);
        int sum;

        pairsum(arr, 6, m);

        return 0;
    }