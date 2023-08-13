//WAP of to swap the two values using template.
#include<iostream>
using namespace std;
template <class x>
x swap(x a, x b)
{
    int c;
    cout<<"\nBefore Swaping the Value of A is: "<<a;
    cout<<"\nBefore Swaping The Value of B is: "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\nAfter Swaping the Value of A is: "<<a;
    cout<<"\nAfter Swaping The Value of B is: "<<b;
}
int main()
{
    cout<<swap<int>(15,16);
}
