// Write a program to find the product of all natural numbers from 1 to n (factorial of n.

/*
10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 3628800
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    cout << "The product of all natural numbers from 1 to " << n << " is: " << product << endl;
    return 0;
}

/*
2^2
*/