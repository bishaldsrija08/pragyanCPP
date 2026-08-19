// Write a program to count the number of digits in a number n

/*
123 => 3 digits
98765=> 5 digits
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string strDigit = to_string(n);
    cout << "The number of digits in " << n << " is: " << strDigit.length() << endl;
    return 0;
}