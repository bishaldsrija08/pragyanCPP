// Write a program to count the number of digits in a number n.

#include <iostream>
using namespace std;

int main(){
    int n;
    int count = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n!=0){
        n = n/10;
        count++;
    }
    cout << "The number of digits in the number is: " << count << endl;
    return 0;
}

/*
int n=123
n = n/10

12
12/10 = 1
1/10 = 0.1 = 0
*/