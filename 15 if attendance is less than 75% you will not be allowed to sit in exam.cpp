#include<iostream>
using namespace std;
int main()
{
    int days,p,a;
    string ans;
    bool flag=0;
    float attendance;
    cout<<"Enter the total number of working days: ";
    cin>>days;
    int orgn_days = days;
    cout<<"Enter the number of days you were present: ";
    cin>>p;
    a = orgn_days-p; // a denotes absent and p denotes present.
    attendance = orgn_days - a;
    attendance = (attendance/orgn_days)*100;
    cout<<"Your attendance is "<<attendance<<"%."<<endl;
        if(attendance>75){
            cout<<"You are allowed to sit in the examination."<<endl;;
        }
        else{
                cout<<"Do you have medical cause: ";
                cin>>ans;
                    if(ans=="Yes" || ans=="yes" || ans=="YES"){
                        cout<<"Submit your medical record to the respective authority and you can sit the in the examination."<<endl;
                    }
                    else if(ans=="No" || ans=="no" || ans=="NO"){
                        cout<<"You are not allowed to sit in the examination."<<endl;
                            }
                    else{
                        cout<<"invalid argument entered."<<endl;
                    }
        }
    return 0;
}
