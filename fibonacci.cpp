/*
    File name: fibonacci.cpp
    
    Problem:
        Fibonacci Series: Generate the Fibonacci series.
    Example:
        0,1,1,2,3,5,8,13,21,34
    Explanation: 
        from 2, which is the 4th element, we add the previous number to the current number / sum 
        2 + 1 = 3   // 3 + 2 = 5    // 5 + 3 = 8    // 8 + 5 = 13 ....
*/
#include <iostream>
using namespace std;

int main(){

    int n;  // to get the number of elements 
    int t1 = 0; // declaring element 1 as 0
    int t2 = 1; // declaring element 2 as 1
    int nextTerm = 0; // after 2

    // user input : number of elements
    cout << "Enter the number of elements / terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    // making a for loop
    for(int i = 1; i <= n; i++){    // i = 0, doesnt have a sense in this case, so we declare 1
        if(i == 1){  // print the 1st 2 terms
            cout << t1 << "," ;
            continue;
        }

        if(i == 2){
            cout << t2 << ",";
            continue;
        }

    // declaring the values
        nextTerm = t1 + t2; // next term is now t1 + t2 (basically, the sum of t1 + t2)
        t1 = t2;    // declaring the contents of t1 as t2
        t2 = nextTerm;  // declaring the contents of t2 as the new nextTerm

        cout << nextTerm << ",";

    }

    return 0;
}
