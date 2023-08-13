//WAP to find the multiplication values and cubic values using inline function?
#include<iostream>
using namespace std;
class line
{
public:
    inline int input(int a){return a*a;}
    inline int data(int b){return b*b*b;}
};
int main()
{
    line l1;
    line l2;
    cout<<"The square of a is: "<<l1.input(8)<<endl;
    cout<<"The cubic of b is: "<<l2.data(8);
    return 0;
}