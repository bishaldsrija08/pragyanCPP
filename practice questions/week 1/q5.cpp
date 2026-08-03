// WAP to input length and breadth of a rectangle and calculate its area and perimeter.
/*
    Formula for area of a rectangle: A = l * b
    Formula for perimeter of a rectangle: P = 2 * (l + b)
    where l is the length and b is the breadth of the rectangle.
*/

#include <iostream>
using namespace std;

int main(){
    float l,b,a,p;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l>>b;
    a = l *b;
    p = 2 * (l + b);
    cout << "The area of the rectangle is: " << a << endl;
    cout << "The perimeter of the rectangle is: " << p << endl;
    return 0;
}