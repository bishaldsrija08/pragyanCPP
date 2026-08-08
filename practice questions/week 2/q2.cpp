// Write a program to simulate a digital door lock. The user enters a 4-digit PIN. If the PIN is correct, display "Access Granted"; otherwise, display "Access Denied".

#include <iostream>
using namespace std;

int main(){
    int pin;
    cout << "Enter 4-digit PIN: ";
    cin >> pin;

    if(pin == 1234){
        cout << "Access Granted" << endl;
    }else{
        cout << "Access Denied" << endl;
    }
    return 0;
}