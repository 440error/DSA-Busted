#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    int z;

    // if u diirectly want user to input operator for which he wants to
    // perform operation use can use--->
    //                                 char z inplace of int z
    // then user can directly enter the operator instead of 1,2,3,4,5
    cout << "_______________________" << endl;
    cout << "for addition(+):       [enter 1] " << endl;
    cout << "for subtracction(-):   [enter 2]" << endl;
    cout << "for multiplication(*): [enter 3]" << endl;
    cout << "for division(/):       [enter 4]" << endl;
    cout << "for modulus(%):        [enter 5]" << endl;
    cout << "_______________________" << endl;
    cout << endl;

    cout << "\nenter number1: ";
    cin >> x;
    cout << "enter number2: ";
    cin >> y;
    cout << endl;

    cout << "enter operation u want to perform: ";
    cin >> z;

    switch (z)
    {
    case 1:
        cout << x + y << endl;
        break;

    case 2:
        cout << x - y << endl;
        break;

    case 3:
        cout << x * y << endl;
        break;

    case 4:
        cout << x / y << endl;
        break;

    case 5:
        cout << x % y << endl;
        break;

    default:
        cout << "no oprator matches " << endl;
        break;
    }

    return 0;
}