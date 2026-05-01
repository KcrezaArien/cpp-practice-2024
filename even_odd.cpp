/*
    File name: even_odd.cpp
    
    Problem: 
    	Check Even or Odd: Determine if a number is even or odd.
*/
#include <iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;

    // use % (modulus operator to divide the number, even number is dividable by 2, odd is not) 
    if(n % 2 == 0)
        cout << n << " is even" << endl;
    else 
        cout << n << " is odd" << endl;

    return 0;
}