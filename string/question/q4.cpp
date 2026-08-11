// Write a program to print the last character of a string.
#include<iostream>
#include<string>

using namespace std;

int main(){
    string name = "Pragyan Shahi";
    int length = name.length();
    char lastChar = name[length - 1];
    cout << "Last character of the string: " << lastChar << endl;
    return 0;
}