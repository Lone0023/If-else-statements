#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a1, a2, a3;
    cout<<"Enter the age of first person: "<<setw(5);
    cin>>a1;
    cout<<"Enter the age of second person: "<<setw(4);
    cin>>a2;
    cout<<"Enter the age of third person: "<<setw(5);
    cin>>a3;
        if(a1>a2 && a2>a3){
            cout<<"First person is oldest and Third person is youngest."<<endl;
        }
        else if(a2>a3 && a3>a1){
            cout<<"second person is oldest and first person is youngest."<<endl;
        }
        else{
            if(a2>a1){
                cout<<"Third person is oldest and first person is youngest."<<endl;
            }
            else{
                cout<<"Third person is oldest and second person is youngest."<<endl;
            }
        }
    return 0;
}
