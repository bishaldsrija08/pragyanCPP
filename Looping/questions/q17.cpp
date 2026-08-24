// Write a program to reverse a number n.

/*
123 => 321
123=> 12=> 1
rev =0
rev = rev * 10 + digit
rev =321
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int rev =0;
    cout << "Enter a number: ";
    cin >> n;

    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    cout << "Reversed number: " << rev << endl;
    return 100;
}