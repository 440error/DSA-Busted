// compare first two elements and return the -ve one
// if both are +ve then return 0
// and so on for all the elements(comaring 2 adjacent at a time)
#include <bits/stdc++.h>
using namespace std;

int negativecheck(int arr[], int size)
{

    int i = 0;

    while (i < (size-1))
    {

        if (arr[i] + arr[i + 1] < max(arr[i], arr[i + 1]))
        {

            cout << min(arr[i], arr[i + 1]) << " ";
            i++;
        }
        else
        {

            cout << "0 ";
            i++;
        }
    }
    cout << endl
         << "PROGRAM FINISHED!" << endl;
}

int main()
{

    int arr[7] = {0, -1, 2, 3, -4, 5, -8};
    negativecheck(arr, 7);
    return 0;
}