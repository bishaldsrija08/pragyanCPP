// WAP to find the largest of two numbers.
#include<iostream>
using namespace std;

int main(){
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;

    if(num1>num2){
        cout << num1 << " is the largest number." << endl;
    }else{
        cout << num2 << " is the largest number." << endl;
    }
    return 0;
}