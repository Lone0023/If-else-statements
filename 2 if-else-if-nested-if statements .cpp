/*you have 2 girlfriends neha and rashmi. Neha is the one who buys expensive things likes to go to shopping
and on other hand rashmi is quite understanding girlfriend. So write a program to decide with whom you should
go on a date*/

#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"Enter your savings amount for this month: "<<endl;
    cin>>savings;

    if(savings>=5000){
            if(savings>=10000){
                cout<<"You will go on a roadtrip with neha.";
            }
            else{
                cout<<"You will go on a shopping with neha.";
            }
    }
        else if(savings>100){
                if(savings>=2000)
                cout<<"You will go with rashmi";

        else{
            cout<<"you will go with friends.";
        }
    }
        else{
            cout<<"Beg your father for the money";
        }


        return 0;
    }



