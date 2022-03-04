// for a given integer return its complment value

#include <bits/stdc++.h>
using namespace std;

int complement(int n)
{
    int m = n;

    if (n == 0)
    {
        return (1);
    }

    int store = 0;
    while (m != 0)
    {
        store = (store << 1) | 1;
        m = m >> 1;
    }

    int comp = (~n) & store; //~ operator just flips the value -->
                             // eg--> ~10110 = 01001
    return (comp);
}
int main()
{

    int n;
    cout << "enter no u want to convert: ";
    cin >> n;

    cout << "complement is: " << complement(n) << endl;

    return 0;
}

// DIRECT CODE WITHOUT FUNCTION
/*
#include <bits/stdc++.h>
using namespace std ;

int main(){
      int n;
    cout << "enter no u want to convert: ";
    cin >> n;
    int m = n;
    int store = 0;
    while (m != 0)
    {
        store = (store << 1) | 1;
        m = m >> 1;
    }

    int comp = (~n) & store;
    cout << comp << endl;
    return 0 ;
}
*/