// WAP to enter the marks of five subjects and calculate the total, average and percentage.
/*
total/fm*100
fm = 100*5 = 500
total/500*100 => total/5
*/
#include <iostream>
using namespace std;

int main(){
    float sub1, sub2, sub3, sub4, sub5, total, avg, per;
    cout << "Enter the marks of five subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    total = sub1 + sub2 + sub3 + sub4 + sub5; // Calculate total marks
    avg = total /5;
    per = (total / 500) * 100; // Calculate percentage
    cout << "The total marks obtained is: " << total << endl;
    cout << "The average marks obtained is: " << avg << endl;
    cout << "The percentage obtained is: " << per << "%" << endl;
    return 0;
}