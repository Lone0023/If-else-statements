#include<iostream>
using namespace std;
int main()
{
    int days,p,a,attendance;
    cout<<"Enter the total number of working days: ";
    cin>>days;
    days = days*0.75;
    cout<<"Enter the number of days you were present: ";
    cin>>p;
        if(p>days){
            cout<<"You are allowed to sit in the examination";
        }
        else{
            cout<<"You are not allowed to sit in the examination";
        }
    return 0;
}
