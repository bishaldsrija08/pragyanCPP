// Write a program to display all multiples of a number m up to n terms

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the number of terms: ";
    int m;
    cin >> m;
    cout << "Multiples of " << n << " up to " << m << " terms are:" << endl;
    for(int i = 1; i <= m; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}