// Write a program to convert a string to uppercase  and lowercase.
#include<iostream>
#include<string>
#include <algorithm> // Required for std::transform
#include <cctype>    // Required for ::toupper

using namespace std;

int main(){
    string name = "Pragyan Shahi";
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << "Uppercase string: " << name << endl;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    cout << "Lowercase string: " << name << endl;

    return 0;
}