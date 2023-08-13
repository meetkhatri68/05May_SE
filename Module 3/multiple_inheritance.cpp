/*Creat a class having members name and age. 
Derive a class student having member percentage. 
Derive another class teacher having member salary.
write necessary member function to intialize, read and write data. write also main function(multiplle inheritance)*/
#include<iostream>
using namespace std;
class NameAge
{
public:
    string NM;
    int Age;
    int inputdata()
    {
        cout<<"\nEnter The Name: ";
        cin>>NM;
        cout<<"\nEnter The Age: ";
        cin>>Age;
    }
};
class Student
{
public:
    float percentage;
    string st;
    int data()
    {
        cout<<"\nEnter Student Name: ";
        cin>>st;
        cout<<"\nEnter The percentage: ";
        cin>>percentage;
    }
};
class Teacher
{
public:
    int salary;
    string t;
    int input()
    {
        cout<<"\nEnter Teacher Name: ";
        cin>>t;
        cout<<"\nEnter The Salary: ";
        cin>>salary;
    }
};
class Show : public NameAge, public Student, public Teacher
{
public:
    void showdata()
    {
        cout<<"\n-----------------"<<NM<<"-----------------";
        cout<<"\nYour Age is: "<<Age;
        cout<<"\n-----------------"<<st<<"------------------";
        cout<<"\nYour Percentage is: "<<percentage;
        cout<<"\n------------------"<<t<<"-------------------";
        cout<<"\nYour Teacher Salary is: "<<salary;
    }
};
int main()
{
    Show S1;
    S1.inputdata();
    S1.data();
    S1.input();
    S1.showdata();
    return 0;
}