// Write a program to reverse a string.
#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    string name = "Pragyan Shahi";
    cout << "Original string: " << name << endl;
    reverse(name.begin(), name.end());
    cout << "Reversed string: " << name << endl;
    return 0;
}