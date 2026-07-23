// This is a simple C++ program
#include<iostream>
using namespace std;

/*
This is main function where the execution of program begins.
Return type of main function is int. It returns an integer value to the operating system upon completion.
*/

int main(){
	cout <<"Hello, hi, how are  you" <<endl;
    cin.get();
	cout << 5/0 <<endl; // This will cause a runtime error (division by zero)
	// std::cout << "Hello World!";
	return 0;
}