#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Entet the first number: ";
    cin>>num1;
    cout<<"Entet the second number: ";
    cin>>num2;
        if(num1>num2){
            cout<<num1<<" is greater than "<<num2<<". Hence "<<num1<<" is the greatest number."<<endl;
        }
        else{
            cout<<num2<<" is greater than "<<num1<<". Hence "<<num2<<" is the greatest number."<<endl;
        }
    return 0;
}
