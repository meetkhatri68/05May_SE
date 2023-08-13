//Assume that the test results of a batch of students are stored in three differeent class.
//Class students are storing the roll number.
//Class test store the markes obtained in two subjects and class results contains the total markes obtained in the test.
//The class result inherit the details of marks obtained in the test and roll number of students.(multilevel inheritance)
#include<iostream>
using namespace std; 
int total,roll1,maths, science, gujarati;
float percentage;
class RollNo
{
public:
    RollNo()
    {
        cout<<"\nEnter Your Roll No: ";
        cin>>roll1;
    }
};
class Subject : public RollNo
{
public: 
    Subject()
    {
        cout<<"\nEnter Your Maths Markes: ";
        cin>>maths;
        cout<<"\nEnter Your Science Markes: ";
        cin>>science;
        cout<<"\nEnter Your Gujarati Markes: ";
        cin>>gujarati;
    }
};
class StoreMarkes : public Subject
{
public:
    StoreMarkes()
    {
        total=maths + science + gujarati;
        cout<<"\nYour Total Markes is: "<<total;
    }
};
class Result : public StoreMarkes
{
public:
    Result()
    {
        percentage=total/3;
        cout<<"\nYour Percentage is: "<<percentage;
        if (percentage > 35)
        {
            cout<<"\nPASS";
        }
        else
        {
            cout<<"\nFAIL";
        }
    }
    int display()
    {
        cout<<"\n-------------Result--------------";
        cout<<"\nYour ROllNo is: "<<roll1;
        cout<<"\nYour Maths Markes is: "<<maths;
        cout<<"\nYour Science Markes is: "<<science;
        cout<<"\nYour Gujarati Markes is: "<<gujarati;
        cout<<"\nYour Total Markes is: "<<total;
        cout<<"\nYour Percentage is: "<<percentage;
        if (percentage > 35)
        {
            cout<<"\nPASS";
        }
        else
        {
            cout<<"\nFAIL";
        }
        cout<<"\n------------------------------------";
    }
};
int main()
{
    Result r1;
    r1.display();
    return 0;
}