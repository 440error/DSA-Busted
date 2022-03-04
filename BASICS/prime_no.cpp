#include <iostream>
using namespace std;

int calculate()
{
}

int main()
{
    int n;
    cout << "enter value till which u want to calculate prime no: ";
    cin >> n;

    int c = 2;
    cout << "all prime numbers till " << n << " are: " << endl; 
    while (c < n)
    {

        for (int i = 2; i < c; i++)
        {
            if (c % i == 0)
            {

                break;
            }

            else if (c == i + 1)
            {
                cout << c << " ";
            }
        }
        c++;
    }
    cout << endl;

    return 0;
}


// ANOTHER WAY 
/*
#include <iostream>
using namespace std ;

int main(){
    int n;
    cin >> n;
    for (int i=2; i<n; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
            {

                break;
            }
            else  if (i == j+1) {


                cout << i << " ";
            }
            

        }  
    return 0 ;
}
*/