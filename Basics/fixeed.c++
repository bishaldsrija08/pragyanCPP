// Fixed
#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double pi = 3.14159265;
    cout << "The value of pi is: " << pi << endl;
    cout << fixed << setprecision(8);
    cout << pi;
    return 0;
}