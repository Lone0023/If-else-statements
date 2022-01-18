#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of side a: "<<endl;
    cin>>a;
    cout<<"Enter the value of side a: "<<endl;
    cin>>b;
    cout<<"Enter the value of side a: "<<endl;
    cin>>c;
        if(a==b && a==c){
            cout<<"The triangle is an equilateral triangle.";
            }
        else if(a==b || a==c || b==c){
            cout<<"The triangle is an isoscles.";
        }
        else{
            cout<<"The triangle is scalene.";
        }
 return 0;
}

