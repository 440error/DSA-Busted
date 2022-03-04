#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return (true);
        }
    }
    return false;
}

int main()
{

    int arr[10] = {2, 34, -4, -57, 854, 1, 9, 0, -7, 4};

    int element;
    cout << "Enter the element u want to search for:  ";
    cin >> element;

    cout << search(arr,10,element) << endl;

    return 0;
}