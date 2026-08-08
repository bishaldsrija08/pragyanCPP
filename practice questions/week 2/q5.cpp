// Three friends enter the number of pizza slices they ate. Write a program to determine who ate the most. If two or more people ate the same maximum number of slices, display "Tie".

#include <iostream>
using namespace std;

int main(){
    int slices1, slices2, slices3;
    cout << "Enter the number of pizza slices eaten by friend 1: ";
    cin >> slices1;
    cout << "Enter the number of pizza slices eaten by friend 2: ";
    cin >> slices2;
    cout << "Enter the number of pizza slices eaten by friend 3: ";
    cin >> slices3;

    if(slices1==slices2 && slices2==slices3){
        cout << "Tie" << endl;
    }else if(slices1>slices2 && slices1>slices3){
        cout << "Friend 1 ate the most slices." << endl;
    }else if(slices2>slices1 && slices2>slices3){
        cout << "Friend 2 ate the most slices." << endl;
    }else{
        cout << "Friend 3 ate the most slices." << endl;
    }
    return 0;
}