// Write a program to display the multiplication table of a number n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Multiplication table of " << n << " is:" << endl;
    for(int i = 1; i <= 20; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}