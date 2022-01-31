#include<iostream>
using namespace std;
int main()
{
    float num;
    cout<<"Enter your number: ";
    cin>>num;
        if(num<0){
            num*= -1;
        }
        cout<<"Your number is "<<num<<"."<<endl;
    return 0;

}
