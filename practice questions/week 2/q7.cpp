/*
Write a program to classify a password as Weak, Medium, or Strong based on its length:
Less than 6 characters: Weak
6–10 characters: Medium
More than 10 characters: Strong
*/

#include <iostream>
using namespace std;

int main(){
    string password;
    cout << "Enter your password: ";
    cin >> password;
    int length = password.length(); // Get the length of the password using the length() function

    if(length < 6){
        cout << "Your password is Weak." << endl;
    }else if(length >= 6 && length <= 10){
        cout << "Your password is Medium." << endl;
    }else{
        cout << "Your password is Strong." << endl;
    }
    return 0;
}