// code to find duplicate elemet in array
//(here in given array only one elemet is repeated and rest of the
// elemnets are only once in the given array)

#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int ans = 0;

    // take xor of all array elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    // take xor of numbers from 1 to `n-1`
    for (int i = 1; i <= size; i++)
    {
        ans = ans ^ i;
    }
    // same elements will cancel each other as a ^ a = 0,
    // 0 ^ 0 = 0 and a ^ 0 = a

    // `ans` will contain the missing number
    
    return ans;
}

int main()
{
    // input array contains `n` numbers between 1 and `n-1` with one duplicate
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (findDuplicate(arr, size) == 0)
    {
        cout << " FALSE" << endl;
    }
    else
    {
        cout << "true" << endl;
    }

    cout << "Duplicate: " << findDuplicate(arr, size) << endl;

    // here u can also give direct size in the array itself
    // i.e --->  int arr[5]={1,2,3,2,4}
    // and then function call as findDuplicate(arr,5)
    return 0;
}