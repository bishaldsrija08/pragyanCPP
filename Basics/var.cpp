#include<iostream>
using namespace std;

int main(){
    // declare and initialize variables
    int a = 10;
    float b = 10.34f;
    char c = 'A';
    string name = "Bishal Rijal";
    bool isTrue = true;
    double d = 10.34;

    int x; // Declaration of variable x
    x=10; // Initialization of variable x

    int y = 20; // Declaration and initialization of variable y


    int z; // Declaration of variable z

    // Multiple variable declaration and initialization
    int p=1, q=2, r=3;
    int s, t, u; // Declaration of multiple variables
    s=t=u=56;
    string name2 = "Pragyan";
    name2 = "Bishal";
    cout << name2 << endl;

    // float int = 56.7; // This will cause an error as 'int' is a reserved keyword in C++

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << name << endl;
    cout << isTrue << endl;
    cout << z << endl; // This will print garbage value as z is not initialized

    const float pi= 3.14f;
    // pi=5;
    // const int secondInMinutes;
    // secondInMinutes = 60; // This will cause an error as secondInMinutes is a const variable and cannot be assigned a value after declaration
    cout << pi << endl;

    // Memory size of variables
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl
            << "Size of char: " << sizeof(char) << " bytes" << endl
            << "Size of string: " << sizeof(string) << " bytes" << endl
            << "Size of bool: " << sizeof(bool) << " bytes" << endl
            << "Size of double: " << sizeof(double) << " bytes" << endl;
    return 0;
}