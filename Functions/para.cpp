#include<iostream>
using namespace std;

void areaOfRectangle(int l, int b){
    cout << l*b;
}

int main(){
    int l,b;
    cout << "Enter length and breadth";
    cin >> l >> b;
    areaOfRectangle(l,b);
    return 0;
}

// 2*(l+b)