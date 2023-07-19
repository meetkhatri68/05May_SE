//WAP user enter 5 subject mark you have to make a total and find percentage
#include<stdio.h>
int main()
{
    char first_name[5];
    printf("enter your name : ");
    scanf("%s",&first_name);
    printf("your name is : %s\n ",first_name);

    int maths,science,gujarati,english,hindi,sum;
    printf("enter your marks (out of 100)for given subject\n");

    printf("maths : ");
    scanf("%d",&maths);

    printf("science : ");
    scanf("%d",&science);

    printf("gujarati : ");
    scanf("%d",&gujarati);

    printf("english : ");
    scanf("%d",&english);

    printf("hindi : ");
    scanf("%d",&hindi);

    sum = maths + science + gujarati + english + hindi;
    printf("total marks : %d\n",sum);
    float percantage;
    percantage = sum/5;
    printf("percentage = %f \n",percantage);

    if (percantage > 75)
    {
        printf("distinction");
    }
    else if (percantage > 60 && percantage <=75)
    {
        printf("first class");
    }
    else if (percantage > 50 && percantage <=60)
    {
        printf("second class");
    }
    else if (percantage > 40 && percantage <=50)
    {
        printf("third class");
    }
    else if (percantage > 30 && percantage <=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    

    return 0;
}
    
    





