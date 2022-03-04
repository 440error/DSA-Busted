//for a given integer n return true if it is power of 2, otherwise false

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    int count=0;
    int num = 1;
    for (int i = 0; i < 31; i++) // i<31 as 2^31 is max  value of int
    {
        if (num == n)
        {
            cout << "true" << endl;
            count++;
            break;
        }
        num=num * 2;
    }
    if(count==0){
    cout << "false" << endl;
    }

    return 0;
}