//WAP to show monday to sunday using switch case
#include<stdio.h>
int main()
{
    int choice;
     printf("enter your choice: (1 to 7): " );
    scanf("%d",&choice);

    switch (choice)
    {
    case 1: printf("monday\n");
        break;
    case 2: printf("tusday\n");
        break;
    case 3: printf("wensday\n");  
        break;
    case 4: printf("thusday\n");
        break;
    case 5: printf("friday\n");
        break;
    case 6: printf("satarday\n");
        break;
    case 7: printf("sunday\n");
        break;
    default : printf("invalid number\n");
        break;

    return 0;                  
    }
}