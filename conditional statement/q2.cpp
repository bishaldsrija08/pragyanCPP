// WAP to check wheter a number is positive or negative.

#include<iostream>
using namespace std;

int main(){
    cout <<"Enter a number: ";
    int num;
    cin>>num;
    if(num>0){
        cout <<"The number is positive."<<endl;
    }else{
        cout <<"The number is negative."<<endl;
    }
    return 0;
}