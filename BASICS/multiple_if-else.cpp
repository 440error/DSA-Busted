#include <iostream>
using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    if (++a)
        cout << b << endl;
    else
        cout << ++b << endl;

    int c =1 ;
    int d= 2;
    if(c-->0 && ++d>2)    
    cout << "if statement executed " << endl;
    else
    cout << "else statement executed " << endl;
    return 0;
}