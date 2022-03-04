#include <bits/stdc++.h>
using namespace std ;

int update(int arr[], int size ){
    cout << "inside the  funtion " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<"  " ;
    }
    cout<< endl << endl;

    // value at index 2 gets updated and new value is 4
    arr[2]=4; 
    cout << "Going back to  main funtion " << endl;
}


int main(){
    
    int arr[3]={1,2,3};

     update(arr,3) ;
    
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] <<"  ";
    }
    cout << endl;  

    return 0 ;
}