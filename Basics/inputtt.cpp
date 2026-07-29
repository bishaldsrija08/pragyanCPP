#include<iostream>
using namespace std;

int main(){
    string name; // Declare a variable to store the user's name
    int age;
    cout << "Enter your name: ";
    // cin >> name;
    getline(cin, name); // Use getline to read the full name including spaces
    cout << "Hello, " << name << "!" << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    return 0;
}