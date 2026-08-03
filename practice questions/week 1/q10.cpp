// WAP to input a seconds and convert it into hours, minutes and seconds.

/*
seconds = 60
0:1:0

1 hours = 60 minutes
1 minute = 60 seconds

1 hours = 60*60 = 3600 seconds
7200 seconds = 2 hrs: 0 mins: 0 seconds
4000%3600 = 400/60 =6 
400%3600 => 400%60 = 40 seconds
*/

#include <iostream>
using namespace std;

int main(){
    int s, h, m;
    cout << "Enter the time in seconds: ";
    cin >> s;
    h= s/3600;
    m = (s%3600)/60;
    s = (s%3600)%60;
    cout << "The time is: " << h << " hours, " << m << " minutes, " << s << " seconds." << endl;
    return 0;
}