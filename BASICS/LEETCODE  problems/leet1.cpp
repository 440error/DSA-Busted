// program to reverse the value of a given number
// eg- no is 123 then program will return 321 as output
// and if reversed value is boyond the limit of int reeturs 0 as output

#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int reversed_value = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((reversed_value > __INT_MAX__ / 10) || (reversed_value < INT_MIN))
        {

            return 0; // returns 0 for any reversed no not in range
        }

        reversed_value = (reversed_value * 10) + digit;

        n = n / 10;
    }
    return (reversed_value);
}

int main()
{
    int x;
    cout << "enter value: ";
    cin >> x;
    cout << "reversed value is : " << reverse(x) << endl;
}

// ANOTHER METHOD ---->

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int m;
//     m = __INT_MAX__;
//     cout << "max value is " << m << endl;

//     int n;
//     cout << "ENTER A NO U WANT TO REVERT: ";
//     cin >> n;

//     int reversed_value = 0;
//     while (n != 0)
//     {
//         int digit = n % 10;
//         if ((reversed_value>__INT_MAX__/10)||(reversed_value<INT_MIN))
//         {
//             reversed_value =0;

//         }
//         else
//         reversed_value = (reversed_value * 10) + digit;

//         n = n / 10;

//     }
//         cout << "reversed value is: " << reversed_value << endl;

//     return 0;
// }
