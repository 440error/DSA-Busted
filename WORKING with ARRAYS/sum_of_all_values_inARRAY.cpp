// print sum of all the elements of a given array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7];
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        count += arr[i];
    }

    cout << "The sum is: " << count << endl;

    return 0;
}