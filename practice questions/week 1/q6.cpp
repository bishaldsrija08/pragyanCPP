// WAP to swap two numbers using a temporary or third variable.
#include <iostream>
using namespace std;

int main(){
    int a=10, b=20, temp;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    temp = a; // temp=10
    a=b; // a=20
    b=temp; //b =10
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}