/*
6537928473298
=> sorted form =>
{1, 6, 9, 3, 2, 7, 8, 4, 7, 3, 2, 9, 8}
sorted array {1, 2, 2, 3, 3, 4, 6, 7, 7, 8, 8, 9, 9}
*/

// WAP to sort an array in ascending order.

#include <iostream>
using namespace std;

int main(){
    int arr[13] = {6, 5, 3, 7, 9, 2, 8, 4, 7, 3, 2, 9, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}