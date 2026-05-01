/*
    File name: factorial.cpp
    
    Problem:
    	Factorial of a Number: Calculate the factorial of a number.
    Example: 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720
        - 6 x 5 = 30  
        - 30 x 4 = 120  
        - 120 x 3 = 360 
        - 360 x 2 = 720
        - 720 x 1 = 720
    Note 0! = 1
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    int factorial = 1;

    cout << "Enter a Positive number: ";
    cin >> n;

    // check if the number given is not less than 0
    if(n < 0)
        cout << "The given number is invalid" << endl;
    // if the number is positive continue
    else { 
        for(int i = 1; i <= n; i++){    // start i to 1 because 0 is not possible
            factorial = factorial * i; // declare factorial variable as factorial x the current n value
        }
    } cout << "The factorial of " << n <<  " is: " << factorial << endl;

    return 0;
}