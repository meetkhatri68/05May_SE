//Define a class to represent a bank account. Include the following members.
#include<iostream>
using namespace std;
class account
{
public:
    int AC,bal,a,bal1,b,t;
    string name,option;
    void input()
    {
        cout<<"Name of depoditor: ";
        cin>>name;
        cout<<"Account Number: ";
        cin>>AC;
        cout<<"Balance Amount in the Account: ";
        cin>>bal;
    }
    void actype()
    {
        cout<<"\nType of Account Saving OR Current: ";
        cin>>option;
    }
    void balance()
    {
       cout<<"\n1 for withdraw";
       cout<<"\n2 for deposite";
       cout<<"\n3 For New Transition";
       cout<<"\nType Any one: ";
       cin>>a;
       switch (a)
       {
    case 1: 
        cout<<"Enter Amount for withdraw: ";
        cin>>b;
        bal1=bal-b;
        cout<<"After Withdraw Your Balance is: "<<bal1;
        break;
    case 2:
        cout<<"Enter Amount for Deposite: ";
        cin>>b;
        bal1=bal+b;
        cout<<"\nAfter Deposite Your Balance is: "<<bal1;
        break;
       }
    }
    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAC NO: "<<AC;
        cout<<"\nType of Account: "<<option; 
        cout<<"\nBalance Amount in the Account: "<<bal;
        cout<<"\nNow Your Balance is: "<<bal1;
    }
};
int main()
{
    account A1;
    A1.input();
    A1.actype();
    A1.balance();
    A1.display();
    return 0;
}