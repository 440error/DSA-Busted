#include <bits/stdc++.h>
using namespace std;

// function to find maximum value in ARRAY
int max(int arr[], int n)
{

    int maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

// function to find minimum value in ARRAY
int min(int arr[], int n)
{

    int minValue = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    return minValue;
}

int main()
{
    // initializing array with 100 elements
    int num[100];
    int size;
    cout << "enter size of array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // calling the functions and printing the maximum and minimum value
    cout << "MAXIMUM VALUE OF ARRAY IS: " << max(num, size) << endl;
    cout << "MINIMUM VALUE OF ARRAY IS: " << min(num, size) << endl;

    cout << "Program Finished !!" << endl;
    return 0;
}