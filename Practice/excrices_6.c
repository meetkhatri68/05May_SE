//write a program to check if given character is digit or not
#include<stdio.h>
int main()
{
    char character;
    printf("enter any character");
    scanf("%c", &character);

    if(character >='0'&& character < '9')
{
    printf("the character is entered is digit");
}
      else {
        printf("the character is entered is not digit");
      }
    return 0;
}
