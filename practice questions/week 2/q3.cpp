// Write a program that takes three integers and determines whether exactly one, exactly two, or all three numbers are odd.

#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    int oddCount = 0;

    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;
    // 4, 6, 8
    if(n1%2==1) oddCount++; 
    if(n2%2==1) oddCount++;
    if(n3%2==1) oddCount++;

    if(oddCount ==1){
        cout << "Exactly one number is odd." << endl;
    } else if(oddCount == 2){
        cout << "Exactly two numbers are odd." << endl;
    } else if(oddCount == 3){
        cout << "All three numbers are odd." << endl;
    } else {
        cout << "No odd numbers." << endl;
    }
    return 0;
}

/*
if
if else
if else if else if .. else

*/