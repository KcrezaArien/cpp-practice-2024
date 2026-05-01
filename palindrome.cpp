/*
    File name: palindrome.cpp
    
    Problem:
        Palindrome Check: Check if a string is a palindrome.
    Example:
        racecar is a palindrome, because if you reverse it, it's still racecar
        build is not a palindrome
    Explanation:
        Palindrome is a reverse of a string, it should be read the same if read backwards
*/
#include<iostream>
using namespace std;

int main(){

    char string[100];
    int length;
    int check = 0;  // 0 means false

    // ask the user to enter a string
    cout <<"Enter a string: ";
    cin >> string;

    // get the length of the string
    length = strlen(string);

    // make a for loop to check 
    for(int i = 0; i < length; i++){
        if(string[i] != string[length - i - 1]){
            check = 1;     // 1 means true
            break;
        }
    }

    if(check)
        cout << string <<" is not a palindrome"<< endl;
    else    
        cout << string <<" is a palindrome"<< endl;

    return 0;
}