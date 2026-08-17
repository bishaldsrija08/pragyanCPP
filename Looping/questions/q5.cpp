// Write a program to find the sum of all natural numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum = 0;
    for(int i=1; i<=n;i++){
        sum += i;
    }
    cout << "Sum of all natural numbers from 1 to " << n << " is: " << sum;
    return 0;
}