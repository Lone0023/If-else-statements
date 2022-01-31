#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter your letter: ";
    cin>>c;
        if(c>='A' && c<='Z'){
            cout<<"It is a upper case letter."<<endl;
        }
        else{
            cout<<"It is a lower case letter."<<endl;
        }
    return 0;
}
