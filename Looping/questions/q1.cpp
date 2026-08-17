// Write a program to display all the natural numbers from 1 to n. (n is user input)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    for(int i=1; i<=n;i++){
        cout << i << " ";
    }
    return 0;
}