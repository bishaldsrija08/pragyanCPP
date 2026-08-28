#include<iostream>
using namespace std;

void printMyName(){
    cout << "Bishal Rijal" << endl;
}

void printRectangleArea(){
    int l=7;
    int b=8;
    cout << l*b << endl;
}

int main(){
    for(int i=1;i<=10;i++){
        printMyName();
    }
    // printRectangleArea();
    return 0;
}