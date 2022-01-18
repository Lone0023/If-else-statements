#include<iostream>
using namespace std;
int main()
{
    int a;
    int div=2;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    if(a%div==0){
        cout<<a<<" is an even number.";
    }
    else{
        cout<<a<<" is an odd number.";
    }
    return 0;
}
