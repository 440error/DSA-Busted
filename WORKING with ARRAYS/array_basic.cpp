#include <bits/stdc++.h>
using namespace std;

//Function to print the values in a array
void printArr(int arr[])
{   int size;
    cout << "size of array is: ";
    cin >> size;
    cout << "Printing the array: ";

    // printing every element in array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<"  ";
    }
    cout << endl << endl;
}

int main()
{
    int first[100];
    
    //prints garbage value as we have noot initialized the array
    printArr(first ); 
    

    int second[100]={0};

    //prints 0 in every case as we have initialized the array with 0
    printArr(second); 

    //but if we take value as 1 or some other integer it will give
    //only first value as that number,  rest will be garbage !
    //EXAMPLE--->

    int third[50]={6};
    printArr(third);

    // if we take more than 1 value in array then it will give
    //only that much values ,  rest will be garbage values !

    int fourth[11]={6,73,9} ;
    printArr(fourth);

    //INDEXING IN A ARRAY

    //for first array
    cout <<"the value at 3 index of array first is: " <<first[3]
         <<endl;

    //for second array
    cout <<"the value at 2 index of array second is: " <<second[2]
         <<endl;

    //for third array
    cout <<"the value at 0 index of array third is: " <<third[0]
         <<endl ;

    //for fourth array    
    cout <<"the value at 2 index of array fourth is: " <<fourth[2]
         <<endl;
    

    // for a char array

    char ch[7]={'a','n','p','z','d'} ;
    cout <<endl<< "the value at index 2 or position 3 is: "<<ch[2] 
    << endl << endl;

    return 0;
}
