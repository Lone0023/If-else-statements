#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"Enter the value of a: "<<endl;
cin>>a;
cout<<"Enter the value of b: "<<endl;
cin>>b;
cout<<"Enter the value of c: "<<endl;
cin>>c;
cout<<endl;
/*
    if(a>b && a>c){

        cout<<a<<" that is the value of a is maximum number out of these three numbers.";

    }

    else if(b>a && b>c){

        cout<<b<<" that is the value of b is maximum number out of these three numbers.";
    }


    else{
        cout<<c<<" that is the value of c is the maximum number out of these 3 numbers";
    }
*/

//ANOTHER WAY TO DO THIS IS TO USE NESTED IFs.
/*
if(a>b){
    if(a>c){
        cout<<a<<" that is the value of a is maximum number out of these three numbers.";
    }
    else{
        cout<<c<<" that is the value of c is the maximum number out of these 3 numbers";
    }
}
    else{
        if(b>c){
        cout<<b<<" that is the value of b is maximum number out of these three numbers.";
        }
        else{
            cout<<c<<" that is the value of c is the maximum number out of these 3 numbers";
        }
    }
*/
    return 0;
}




