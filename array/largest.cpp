// WAP to find the largest element in an array.

#include <iostream>
using namespace std;

int main(){
    int arr[7]={90,5,4,6,9,8,100};

    int largest = arr[0];

    for(int i=1;i<7;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest element in the array is: "<<largest<<endl;
}