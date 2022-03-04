#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter value till which u want to calculate the sum:  ";
    cin >> n;
    
    int i = 1;
    int s = 0;

    for (i; i <=n; i++)
    {
        s += i;
    }
    cout << "the sum from 1 to " << n << " is: " << s << endl;
    cout << "direct sum =" << n*(n+1)/2 << endl;
    return 0;
}