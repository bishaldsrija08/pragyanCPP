// WAP to reverse an array.

/*
{1, 2, 3, 4, 5}
=> reversed form =>
{5, 4, 3, 2, 1}

{1,2,3,4,5}
*/

#include <iostream>
using namespace std;

int main(){
    int arr[18] = {1,2,3,4,5,4,5,6,1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Reverse the array
    for(int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

    // Print the reversed array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}