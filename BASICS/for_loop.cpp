#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter value of n: " << endl;
    cin >> n;
    cout << "printing value of count from 1to  n: " << endl;
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
    int j = 1;
    for (int a = 0, b = 4; a <= 2 && b >= 0; a++, b--)
    {
        cout << "for " << j << " loop value of a is  " << a << " and value of b is " << b << endl;
        j++;
    }

    return 0;
}