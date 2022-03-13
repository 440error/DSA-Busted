#include <bits/stdc++.h>
using namespace std;

int findROOT(int n)
{
    int s = 0;
    int e = n - 1;

    long long int mid = s + (e - s) / 2;

    long long int ans = -1;

    while (s <= e)
    {
        long long int m = mid * mid;
        if (m == n)
        {
            return mid;
        }

        else if (m < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int temp)
{

    double factor = 1;
    double ans = temp;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int k;
    cout << "Enter Number of which u want to find ROOT: ";
    cin >> k;

    int temp = findROOT(k);

    cout << "Square root of " << k << " is: "
         << morePrecision(k, 4, temp)
         << endl;
    return 0;
}