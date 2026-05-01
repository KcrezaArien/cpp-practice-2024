/*
    File name: find_min.cpp
    
    Problem:
        Find Minimum Element: Find the minimum element in an array.
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    int arr[100];

    cout <<"Enter the number of elements to store (Max 100): ";
    cin >> n;
    cout << endl;

    // make a for loop to store the elements:
    for(int i = 0; i < n; i++){
        cout <<"Enter the number: " << i + 1 <<" : ";
        cin >> arr[i];
    }

    // loop to store the smallest number to arr[0]
    for(int i = 1; i > n; i++){
        if(arr[0] > arr[i]){
           arr[0] = arr[i];
        }
    }

    cout << endl <<"Smallest element: " << arr[0] << endl;

    return 0;
}

// This example mirrors the find_max.cpp