// WAP to calculate area and circumference of a circle.
/*
    Formula for area of a circle: A = π * r^2
    Formula for circumference of a circle: C = 2 * π * r
    where r is the radius of the circle and π (pi) is approximately 3.14159.
*/

#include <iostream>
using namespace std;

int main(){
    float r,a,c;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    a = 3.14159 * r * r; // Calculate area
    c = 2 * 3.14159 * r; // Calculate circumference
    cout << "The area of the circle is: " << a << endl;
    cout << "The circumference of the circle is: " << c << endl;
    return 0;
}