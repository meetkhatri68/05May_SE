/*WAP to find the max number from given numbers using friend function?*/
#include<iostream>
using namespace std;
class Maximum
{
public:
    friend int data(Maximum &M);
private:
    int x,y;
};
int data(Maximum &M)
{
    cout<<"\nEnter The Value: ";
    cin>>M.x;
    cout<<"\nEnter The Value: ";
    cin>>M.y;
    if (M.x > M.y)
    {
        cout<<"\nNumber First Is MAX: "<<M.x;
    }
    else
    {
        cout<<"\nNumber Second Is MAX: "<<M.y;
    }
}
int main()
{
    Maximum M1;
    data(M1);
    return 0;
}