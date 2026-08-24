// Write a program to find the largest digit in a number n.
/*
456789 = 9
124354 => 5
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int largest = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n!=0){
        int digit = n%10;
        if(digit ==9){
            largest = 9;
            break;
        }
        if (digit>largest){
            largest = digit;
        }
        n = n/10;
    }
    cout << "Largest digit: " << largest << endl;
    return 0;
}