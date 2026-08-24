// Write a program to find the sum of all digits of a number n.

#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n!=0){
        int digit = n % 10; // Get the last digit
        sum += digit; // Add the last digit to the sum
        n = n/10; // Remove the last digit
    }
    cout << "Sum of all digits: " << sum << endl;
    return 0;
}

/*
122 => 1+2+2 = 5
*/