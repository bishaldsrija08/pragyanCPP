/*
A cinema charges different ticket prices based on age:
Below 5: Free
5–12: $5
13–59: $10
60 and above: $6
Write a program to calculate the ticket price.
*/

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age<5){
        cout << "Your ticket is free."<<endl;
    }else if(age>=5 && age<=12){
        cout << "Your ticket price is $5." endl;
    }else if(age>=13 && age<=59){
        cout << "Your ticket price is $10." << endl;
    }else{
        cout << "Your ticket price is $6." << endl;
    }
    return 0;
}