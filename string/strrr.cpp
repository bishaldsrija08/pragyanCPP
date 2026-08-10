#include<iostream>
#include<string>
using namespace std;

int main(){
    // String varialbe
    string name = "Bishal";
    string student= "Pragyan";

    // Concatenation
    string fullName = name + " teaches c++ to " + student + ".";
    cout << "Full Name: " << fullName << endl;

    // Append
    name.append(" is a good teacher.");
    cout << "Appended Name: " << name << endl;

    // Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;

    // Accessing Characters
    string myName = "Bishal";
    cout << "First character: " << myName[0] << endl;
    cout << "Last character: " << myName[myName.length() - 1] << endl;

    // Edit
    string myString = "Hello";
    myString[0] = 'J';
    cout << "Modified String: " << myString << endl;

    // Special character
    string txt2 = "We are the so-called \"Vikings\" from the north.";
    cout << txt2 << endl;

    return 0;
}