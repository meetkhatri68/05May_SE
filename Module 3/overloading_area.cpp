/*WAP to calculate the area of circle, rectangle and triangle using function overloading*/
#include<iostream>
using namespace std;
class Area
{
public: 
    inline float circle(float radius, float pi) {return pi * radius * radius;}
    inline int rectangle(int area, int width) {return area * width;}
    inline int triangle(int base, int hight) {return (base * hight)/2;}
};
int main()
{
    Area A1;
    int a;
    cout<<"\nArea of Circle is: "<<A1.circle(15,3.14);
    cout<<"\nArea of Rectangle is: "<<A1.rectangle(15,7);
    cout<<"\nArea of Triangle is: "<<A1.triangle(18, 10);
    return 0;
}