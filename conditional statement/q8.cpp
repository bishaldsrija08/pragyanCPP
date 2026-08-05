// WAP to check whether a number is divisible by 5 and 3.
#include<iostream>
using namespace std;

int main(){
    cout <<"Enter a number: ";
    int num;
    cin >> num;
    if(num%5==0 && num%3==0){
        cout << "The number is divisible by both 5 and 3." << endl;
    }
    else{
        cout << "The number is not divisible by both 5 and 3." << endl;
    }
    return 0;
}