// WAP to check username and password using if else statement
/*
set username and password
input username and password
check if username and password are correct
if correct, print "Login successful"
else, print "Invalid username or password"
*/

#include <iostream>
using namespace std;

int main(){
    string username, password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if(username == "admin" && password == "pass"){
        cout << "Login successful" << endl;
    } else {
        cout << "Invalid username or password" << endl;
    }

    return 0;
}