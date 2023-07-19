//WAP find out length  of strinng without using inbuilt function
#include<stdio.h>
int length()
{
    int i;
   char str[100];
   printf("\nEnter the String: ");
   gets(str);
   for(i=0;str[i]!='\0';i++);
   printf("String Length: %d",i);
}
int main()
{
   length();
   return 0;
}


