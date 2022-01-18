#include<iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter your letter: ";
    cin>>a;
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
        cout<<"Your letter is a vowel.";
    }
    else{
        cout<<"Your letter is a consonant.";
    }
    return 0;
}
