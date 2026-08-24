// Write a program to display all the digits of a number n (one per line).
#include <iostream>
using namespace std;

int main(){
    int n;
    int digit;
    cout << "Enter a number: ";
    cin >> n;

    while (n!=0){
        digit = n % 10; // Get the last digit
        cout << digit << endl; // Display the last digit
        n = n/10; // Remove the last digit
    }
    return 0;
}