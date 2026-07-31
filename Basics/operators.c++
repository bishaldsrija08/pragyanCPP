#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition = " << a + b << endl;
    cout << "Subtraction = " << a - b << endl;
    cout << "Multiplication = " << a * b << endl;
    cout << "Division = " << a / b << endl;
    cout << "Modulus = " << a % b << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int a = 10;

    a += 5;
    cout << a << endl;   //15

    a -= 3;
    cout << a << endl;   //12

    a *= 2;
    cout << a << endl;   //24

    a /= 4;
    cout << a << endl;   //6

    return 0;
}