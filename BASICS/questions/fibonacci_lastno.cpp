// enter a value n and for a fibonacci series  having n elements
// print last value of that filbonacci series
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter which no you want of  fibonacci series: ";
    cin >> n;
    int a = 0;
    int b = 1;
    // cout << a << " " << b;

    for (int i = 1; i < n - 1; i++)
    {
        int nxt = a + b;
        // cout << " " << nxt;
        a = b;
        b = nxt;
    }
    cout << b << endl;
    return 0;
}