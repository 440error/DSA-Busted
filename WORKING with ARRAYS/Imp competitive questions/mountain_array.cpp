#include <bits/stdc++.h>
using namespace std;

int Highest(int arr[], int n)
{
    int h = -1;
    for (int i = 1; i < (n - 1); i++)
    {

        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            h = arr[i];
        }
    }
    return h;
}

int main()
{
    int arr[7] = {1, 3, 4, 9, 8, 6, 0};
    int ans = Highest(arr, 7);
    cout << ans << endl;
    return 0;
}