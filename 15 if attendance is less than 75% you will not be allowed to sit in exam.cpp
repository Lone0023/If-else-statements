#include<iostream>
using namespace std;
int main()
{
    int days,p,a;
    float attendance;
    cout<<"Enter the total number of working days: ";
    cin>>days;
    int orgn_days = days;
    cout<<"Enter the number of days you were present: ";
    cin>>p;
    a = orgn_days-p;
    attendance = orgn_days - a;
    attendance = (attendance/orgn_days)*100;
    cout<<"Your attendance is "<<attendance<<"%."<<endl;
        if(attendance>75){
            cout<<"You are allowed to sit in the examination.";
        }
        else{
            cout<<"You are not allowed to sit in the examination.";
        }
    return 0;
}
