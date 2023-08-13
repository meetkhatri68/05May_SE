//WAP to concatenate the two strings using operator overloading?
#include<iostream>
#include<string.h>
using namespace std;
class String
{
public:
    char Fname[20], Lname[20];
    int input()
    {
        cout<<"\nEnter Your First Name: ";
        cin>>Fname;
        cout<<"\nEnter your Second Name: ";
        cin>>Lname;
        strcat(Fname, Lname);
        cout<<"\nYour Full Name Is: "<<Fname;
    }
};
int main()
{
    String s1;
    s1.input();
}