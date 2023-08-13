//WAP to create simple calculator using class?
#include<iostream>
using namespace std;
class Calculator
{
public:
    int a,b,option;
    void input()
    {
        cout<<"enter the first number: ";
        cin>>a;
        cout<<"enter the second number: ";
        cin>>b;
        cout<<"\npress 1 for addition";
        cout<<"\npress 2 for substraction";
        cout<<"\npress 3 for Multiplication";
        cout<<"\npress 4 for devision";
        cout<<"\nEnter Your Option: ";
        cin>>option;

        switch (option)
        {
        case 1:cout<<"Addition: ";
            cout<<a+b;
            break;

        case 2:cout<<"Substraction: ";
            cout<<a-b;
            break;

        case 3:cout<<"Multiplication: ";
            cout<<a*b;
            break;

        case 4:cout<<"Devision: ";
            cout<<a/b;
            break;
        default:cout<<"Enter Worng Option";
            break;
        }
    }
};
int main()
{
    Calculator c1;
    c1.input();
    return 0;
}