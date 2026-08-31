// WAP to check whether a number is prime or not
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
// 10> [1]2...9[10]
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n=10;
    bool result = isPrime(n);
    if(result){
        cout<<n<<" is a prime number"<<endl;
    }else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}