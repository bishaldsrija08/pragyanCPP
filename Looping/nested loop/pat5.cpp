/*
1 2 3 4
5 6 7 8
8 10 11 12
13 14 15 16
*/

#include<iostream>
using namespace std;

int main(){
    int n=4;
    int counter=1;
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << counter << " ";
            counter++;
        }
        cout<<endl;
    }
}

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16