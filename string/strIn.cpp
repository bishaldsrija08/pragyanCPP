#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout << "Enter your name: ";
    // cin >> name;
    getline(cin, name); // To read full name with spaces
    cout << "Hello, " << name << "! Welcome to C++ programming." << endl;
    return 0;
}