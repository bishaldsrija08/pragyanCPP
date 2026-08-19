// Write a program to count how many numbers from 1 to n are divisible by 3.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            count++;
        }
    }
    cout << "The number of natural numbers from 1 to " << n << " that are divisible by 3 is: " << count << endl;
    return 0;
}