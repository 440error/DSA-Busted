#include <bits/stdc++.h>
using namespace std;

int setbits(int a){
	 int count = 0;
    while (a )
    {
    

                             // ANOTHER syntax(without if ) ---->
        if (a & 1==1 )       //                       count += a & 1;
                             //                       a >>= 1;
        {
            count=count+1;
        }
        a= a >> 1;
    }
    return (count);
}

int main()
{
    int a, b;
    cout << "enter first number: ";
    cin >> a;
    cout << "enter second number: ";
    cin >> b;

    int y= setbits(a) ;
	int z= setbits(b)   ;                                        
    cout << "no of set bits is equal to: " <<y+z<< endl;
    return 0;
}
