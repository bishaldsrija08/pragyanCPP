#include<iostream>
using namespace std;

void myCountry(string country = "Nepal"){
    cout << "I am from "<< country << endl;
}

void areaOfRectangle(int l=3, int b=4){
    cout << l*b << endl;
}

int main(){
    myCountry();
    myCountry("India");
    areaOfRectangle();
    areaOfRectangle(5, 6);
    return 0;
}