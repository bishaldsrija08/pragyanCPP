#include<iostream>
using namespace std;

int areaOfRectangle(int l, int b){
    return l*b;
}

int main(){
    int l, b;
    cout<<"Enter length and breadth of rectangle: ";
    cin>>l>>b;
    int result = areaOfRectangle(l, b);
    cout<<"Area of rectangle is: "<<result<<endl;

    return 0;
}