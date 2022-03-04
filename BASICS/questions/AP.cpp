#include <bits/stdc++.h>
using namespace std;

int AP(int x)
{
    int z = 3 * (x) + 7;
    return (z);
}

int main()
{
    int n;
    cout << "Enter the term u want to calculate: ";
    cin >> n;
    cout << AP(n) << endl;
    return 0;
}