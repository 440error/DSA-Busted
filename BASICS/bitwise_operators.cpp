#include <iostream>
using namespace std;

int main()
{
    int a = 7; // binary- 0111
    int b = 8; // binary- 1000

    cout << "a&b= " << (a & b) << endl;
    cout << "a&&b= " << (a && b) << endl;
    cout << "a|b= " << (a | b) << endl;
    cout << "~a= " << (~a) << endl;
    cout << "a^b= " << (a ^ b) << endl;

    cout << "1 left shift of 17: " << (17 << 1) << endl;
    cout << "2 left shift of 17: " << (17 << 2) << endl;
    cout << "1 right shift of 17: " << (17 >> 1) << endl;
    cout << "2 right shift of 17: " << (17 >> 2) << endl;

    return 0;
}