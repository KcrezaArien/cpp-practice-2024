/*
    File name: prime_number.cpp
    
    Problem: 
    	Check Prime Number: Check if a number is prime.
    Example: 13 is a prime number, because it's only divisible by 1
             15 is not because, it can be divided by 1, 3 and 5
    Note: 0 and 1 is not a prime number
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    bool is_prime = true;   // use bool to check if the number is prime

    cout << "Enter a positive number: ";
    cin >> n;

    // check if the number is 0 or 1, since they are not prime number, we declare it false
    if(n == 0 || n ==1){
        is_prime = false;
    }

    // check if the number is prime
    for(int i = 2; i <= n / 2; i++){    // i shouldnt be divisible by other number
        if(n % i == 0){
            is_prime = false;
            break;
        }
    }

    if(is_prime)
        cout << n <<" is a prime number"<<endl;
    else
        cout << n <<" is not a prime number" << endl;

    return 0;
}