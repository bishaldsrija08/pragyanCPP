// WAP to find the sum of all elements in an array.

#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    // arr[5]={5,4,6,9,8};

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << "The sum of all elements in the array is: " << sum << endl;
}