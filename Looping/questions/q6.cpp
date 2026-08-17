// Write a program to find the sum of all even numbers from 1 to n

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum = 0;
    for(int i=2; i<=n;i+=2){
        sum += i;
    }
    cout << "Sum of all even numbers from 1 to " << n << " is: " << sum;
    return 0;
}