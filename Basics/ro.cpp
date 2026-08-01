#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20;
    cout << (a < b) << endl;
    cout << (a == b) << endl;

    int age = 20;

if (age >= 18 && age <= 60)
    cout << "Eligible" << endl;


    int marks = 35;

if (marks >= 40 || marks == 35)
    cout << "Condition satisfied" << endl;

    bool rain = false;

if (!rain)
    cout << "Go outside" << endl;
    return 0;
}