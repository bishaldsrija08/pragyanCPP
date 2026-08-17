// Write a program to display all even numbers from 1 to n.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    for(int i=2; i<=n;i+=2){ // i=i+2
        cout << i << " ";
    }
    return 0;
}