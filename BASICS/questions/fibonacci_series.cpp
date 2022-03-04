// enter a value n and print fibonacci series havinbg n elements
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter how many no u want in  fibonacci series: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b;
   
    for (int i = 1; i < n - 1; i++)
    {
        int nxt = a + b;
        cout << " " << nxt;
        a = b;
        b = nxt;
    }
    cout << endl;
    return 0;
}