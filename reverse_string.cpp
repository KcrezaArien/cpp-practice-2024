/*
    File name: reverse_string.cpp
    
    Problem: 
    	Reverse a String: Reverse the characters in a given string.
*/
#include <iostream>
using namespace std;

// make a separate function to reverse a string
void reverse(string& str){
   
    int n = str.length();

        for(int i = 0; i < n / 2; i++){
            swap(str[i], str[n - i - 1]);
        }
}

int main (){

    string s = "Hello";
    reverse(s);
    cout << "Reverse: "<< s << endl;

    return 0;
}