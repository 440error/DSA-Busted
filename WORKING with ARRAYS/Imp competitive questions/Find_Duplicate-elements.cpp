// code to find multiple duplicates elements inn a given array
// and print those

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int size)
{
    
}

int main()
{
    // input array contains `n` numbers between 1 and `n-1` with one duplicate
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate: " << findDuplicate(arr, size) << endl;

    // here u can also give direct size in the array itself
    // i.e --->  int arr[5]={1,2,3,2,4}
    // and then function call as findDuplicate(arr,5)
    return 0;
}