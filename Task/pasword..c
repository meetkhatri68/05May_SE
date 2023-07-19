//wap to creat password
#include<stdio.h>
int main()
{
    char password[15],confpassword[15];
    int value;
    printf("enter new password: ");
    scanf("%s",&password);
    printf("enter confirm password: ");
    scanf("%s",&confpassword);
    value=strcmp(password,confpassword);
    if (value==0)
    {
        printf("login successful");
    }
    else
    {
        printf("password doesnt match");
    }
    return 0;
}