//WAP of Addition Substraction Division Multiplication using constructor?
#include<iostream>
using namespace std;
class construct
{
public:
    int a,b;
    construct()
    {
        cout<<"Enter the First Value: ";
        cin>>a;
        cout<<"Enter the Second Value: ";
        cin>>b;
    }
    void show()
    {
        cout<<"\nAddition of A & B = "<<a+b;
        cout<<"\nSubstraction of A & B = "<<a-b;
        cout<<"\nDivision of A & B = "<<a/b;
        cout<<"\nMultiplication of A & B = "<<a*b;
    }
};
int main()
{
    construct c1;
    c1.show();
    return 0;
}