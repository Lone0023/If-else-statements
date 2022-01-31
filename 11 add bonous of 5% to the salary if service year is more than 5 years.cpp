#include<iostream>
using namespace std;
int main()
{
    float salary,year,bonous;
    cout<<"Enter your year of service for this company: ";
    cin>>year;
    cout<<"Enter your current salary: ";
    cin>>salary;
        if(year>5){
            bonous=salary*0.05;
            salary=salary + bonous;
            cout<<"Your salary is "<<salary<<endl;
        }
        else{
            cout<<"Your salary is "<<salary<<endl;
        }
    return 0;
}
