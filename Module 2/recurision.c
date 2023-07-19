//Wap to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
void rev(char name[], int s, int l)
{
    char ch;
    if(s>=l)
    return;
    ch=name[s];
    name[s]=name[l];
    name[l]=ch;
    rev(name,++s,--l);
}
int main()
{
    char name[5];
    printf("Enetr your name: ");
    gets(name);
    rev(name,0,strlen(name)-1);
    printf("Reverse name is: %s",name);
    return 0;
}