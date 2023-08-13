/*Assume a class cricketer is declared.Declare a derived class batsman from cricketer. Data member of batsman. Total run,
Average runs and best performance. Member functions input data,calculate average runs,Display data.(single inheritance)*/
#include<iostream>
using namespace std;
class circketer
{
public:
    int i,run[5],average;
    int total;
    int player()
    {
        int c;
        cout<<"\nHow Many cricketer is their in Match: ";
        cin>>c;
    }
    int runs()
    {
        cout<<"\nenter the number: ";
        for (i=0; i<5; i++)
        {
            cin>>run[i];
        }
    }
};
class Batsman : public circketer
{
public: 
    int Total()
    {
        total=run[0]+run[1]+run[2]+run[3]+run[4];
        cout<<"\nYour Total run is: "<<total;
    }
    int Average()
    {
        average=total/5;
        cout<<"\nTotal Average is: "<<average;
    }
    int BestPerformance()
    {
        int max;
        max=-1;
        for (i=1; i<5; i++)
    {
        if (run[i]>max)
        {
            max=run[i];
        }   
    }
        cout<<"\n Best Performance is: "<<max;
    }
};
int main()
{
    Batsman c1;
    c1.player();
    c1.runs();
    c1.Total();
    c1.Average();
    c1.BestPerformance();
    return 0;
}