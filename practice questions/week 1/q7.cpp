// WAP to to convert temperatur from celsius to fahrenheit.
/*
    Formula for converting Celsius to Fahrenheit: F = (C * 9/5) + 32
    where F is the temperature in Fahrenheit and C is the temperature in Celsius.
*/
#include <iostream>
using namespace std;

int main(){
    float c,f;
    cout << "Enter temperature in Celsius: ";
    cin >> c;
    f = (c * 9/5) + 32; // Convert Celsius to Fahrenheit
    cout << c << " degrees Celsius is equal to " << f << " degrees Fahrenheit." << endl;
    return 0;
}