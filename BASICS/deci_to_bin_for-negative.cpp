
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << " enter no  ";
    cin >> n;
    int x;
    x =abs(n);
    cout << x << endl;

    int m;
    int z;

    int ans = 0;
    int i = 0;

    while (x != 0)
    {
        int bit = x & 1;
       
    
        ans = (bit * pow(10, i)) + ans;

        x = x >> 1;
        i++;
    }
   
    m = ~ans;
    m= m + 1;
    z = ~m;
    z=z + 1;
    cout << z << endl;


    return 0;
}