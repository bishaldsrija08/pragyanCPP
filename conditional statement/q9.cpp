// WAP to check a grade of a student based on marks.
/*
>90 and <=100 = A+
>80 and <=90 = A
>70 and <=80 = B+
>60 and <=70 = B
*/

#include<iostream>
using namespace std;

int main(){
    cout << "Enter marks: ";
    int marks;
    cin >> marks;
    if(marks>90 && marks<=100){
        cout << "Grade: A+" << endl;
    }
    else if(marks>80 && marks<=90){
        cout << "Grade: A" << endl;
    }
    else if(marks>70 && marks<=80){
        cout << "Grade: B+" << endl;
    }
    else if(marks>60 && marks<=70){
        cout << "Grade: B" << endl;
    }
    else if(marks>=0 && marks<=60){
        cout << "Grade: C" << endl;
    }else{
        cout << "Invalid marks entered." << endl;
    }
    return 0;
}