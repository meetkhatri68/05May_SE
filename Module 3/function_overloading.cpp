/*WAP to mathemetic operation like addtition substraction multiplication division of two number using.
Drifferent parameters and function overloading*/
#include<iostream>
using namespace std;
class A
{
public: 
    inline int add(int a, int b) {return a + b;}
    inline int sub(int a, int b) {return a - b;}
    inline int mul(int a, int b) {return a * b;}
    inline int div(int a, int b) {return a / b;}
};
int main()
{
    A a1;
    cout<<"\nAddition of two numbers is: "<<a1.add(12, 5);
    cout<<"\nSubstraction of two number is: "<<a1.sub(13, 6);
    cout<<"\nMultiplication of two number is: "<<a1.mul(14, 7);
    cout<<"\nDivision of two number is: "<<a1.div(16, 8);
    return 0;
}