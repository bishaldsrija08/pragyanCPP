#include<iostream>
using namespace std;

int main(){
    string name[6] = {"67", "Alice", "Bob", "Eve", "Charlie"};
    // name[0]=67;
    // name[1]="Alice";
    // name[2]="Bob";
    // name[3]="Eve";
    // name[4]="Charlie";

    cout<<"The names are: "<<endl;
    // cout << name[0] << endl;
    // cout << name[1] << endl;
    // cout << name[2] << endl;
    // cout << name[3] << endl;
    // cout << name[4] << endl;

    name[0] = "Digital Bishal";

    for(int i=0; i<6; i++){
        cout << name[i] << endl;
    }

    return 0;
}