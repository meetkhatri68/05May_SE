/*WAP to swap the two numbers using friend function without using third variable*/
#include<iostream>
using namespace std;
class Number
{
public:
    friend int data(Number &a);
private:
    int x,y;  
};
int data(Number &a)
{
    cout<<"\nEnter The Value of X: ";
    cin>>a.x;
    cout<<"\nEnter The Vale of Y: ";
    cin>>a.y;
    cout<<"\nBefore Swaping the Value of X is: "<<a.x;
    cout<<"\nBefore Swaping The VAlue OF Y is: "<<a.y;
    a.x=a.x-a.y;
    a.y=a.y+a.x;
    a.x=a.y-a.x;
    cout<<"\n------------------------------------------------";
    cout<<"\nAfter Swaping The Value of X is: "<<a.x;
    cout<<"\nAfter Swaping The Value Of Y is: "<<a.y;
}
int main()
{
    Number obj;
    data(obj);
    return 0;
}
