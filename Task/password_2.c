//wap to creat password
#include<stdio.h>
int main()
{
    char username[4];
    int password;
    int confirm_password;

    printf("enter username:-");
    scanf("%s",&username);
    printf("enter password:-");
    scanf("%d",&password);
    printf("enter confirm_password:-");
    scanf("%d",&confirm_password);

    if (password==confirm_password)
    {
        printf("login success");
    }
    else 
    {
        printf("wrong password");
    }
    return 0;
}

