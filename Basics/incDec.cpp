// ++ => inclrease by 1
// -- => decrease by 1

#include <iostream>
using namespace std;

int main(){
    int a = 5;
    cout << ++a << endl; // increase by 1 and then print => 6
    cout << a << endl; // print a => 6

    int b = 5;
    cout << b++ << endl; // print b first => 5 and then increase by 1
    cout << b << endl; // print b => 6


    int a = 5;
    cout << --a << endl; // decrease by 1 and then print => 4
    cout << a << endl; // print a => 4

    int b = 5;
    cout << b-- << endl; // print b first => 5 and then decrease by 1
    cout << b << endl; // print b => 4
}