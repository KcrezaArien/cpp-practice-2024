/*
    File name: find_max.cpp
    
    Problem:
        Find Maximum Element: Find the maximum element in an array.
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    int arr[100];

    cout <<"Enter the number of elements to store (Max 100): ";
    cin >> n;
    cout << endl;

    // make a for loop to store the elements
    for(int i = 0; i < n; i++){
        cout << "Enter number: " << i + 1 << " : " ;    // to numerically order the number
        cin >> arr[i];
    }

    // loop to store the largest number to arr[0]   
    for(int i = 1; i < n; i++){     // to find the smallest, just change < to >
        if(arr[0] < arr[i]){
           arr[0] = arr[i];
        }
    }

    cout << endl << "Largest element: " << arr[0] << endl;

    return 0;
}

// This example mirrors the find_min.cpp