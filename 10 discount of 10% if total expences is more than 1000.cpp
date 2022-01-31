#include<iostream>
using namespace std;
int main()
{
    int Total_exp, discount, quantity;
    cout<<"Enter your quantity: ";
    cin>>quantity;
    Total_exp = 100*quantity; //given 1 quantity will cost 100Rs.
        if(Total_exp>1000){
            discount = Total_exp*0.1; //discount given is 10%.
            Total_exp = Total_exp - discount;
            cout<<"Your total amount is: "<<Total_exp;
        }
        else{
            cout<<"Your total amount is: "<<Total_exp;
        }
    return 0;
}
