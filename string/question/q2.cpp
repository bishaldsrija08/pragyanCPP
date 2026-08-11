// Write a program to find the length of a string.
#include<iostream>
#include<string>

using namespace std;

int main(){
    string name = "Pragyan Shai";
    int l1= name.length();
    int l2= name.size();
    cout << "Length of the string using length() function: " << l1 << endl;
    cout << "Length of the string using size() function: " << l2 << endl;
    return 0;
}