// WAP to check wheter a number is positive, negative or zero
#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if(num>0){
        cout << "The number is positive." << endl;
    }
    else if(num<0){
        cout << "The number is negative." << endl;
    }
    else{
        cout << "The number is zero." << endl;
    }
    return 0;
}