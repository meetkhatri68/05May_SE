//Assignment operator
#include<stdio.h>
int main()
{
    int a = 60;
    int b = 40;
    float div;
    div=(float)a/(float)b;
   
   // printf("\nmultiplication of a and b : %d",a*= b);

    
    printf("\ndivision of a and b : %f",div);

    printf("\nmodulo of a and b : %d", a %= b);

    return 0;

}