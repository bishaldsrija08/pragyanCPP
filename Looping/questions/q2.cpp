// Write a program to display all the natural numbers from 1 to n. (n is user input) in reverse order.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    for(int i=n; i>=1;i--){
        cout << i << " ";
    }
    return 0;
}