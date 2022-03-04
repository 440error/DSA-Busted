#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 1330;
     cout << "_______________________\n" << endl;

    switch (num)
    {
    case 1330:
        cout << "no of 100 rupee notes is: " << num / 100 << endl;
        num = num - (num / 100) * 100;

    case 2:
        cout << "no of 50 rupee notes is: " << num / 50 << endl;
        num = num - (num / 50) * 50;

    case 3:
        cout << "no of 20 rupee notes is: " << num / 20 << endl;
        num = num - (num / 20) * 20;

    case 4:
        cout << "no of 1 rupee notes is: " << num / 1 << endl<<"\n";
        num = num - (num / 1) * 1;

    default:
        cout << "NOTO KI SAMAPTI" << endl;
        break;
    }
     cout << "_______________________" << endl;

    return 0;
}