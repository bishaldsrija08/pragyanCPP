// WAP to calculate the area of a circle
#include <iostream>
using namespace std;

float areaOfCircle(float r) {
    return 3.14159 * r * r;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float result = areaOfCircle(radius);
    cout << "Area of circle is: " << result << endl;

    return 0;
}