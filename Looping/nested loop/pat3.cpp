/*
A B C D
A B C D
A B C D
A B C D
*/
#include<iostream>
using namespace std;

int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(char ch='A'; ch<='D'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}