//WAP to show vowel or consonant using switch case
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the value of ch : ");
    scanf("%c",&ch);

    switch (ch)
    {
    case  'a':
        printf("Vowel");
        break;
    case  'A':
        printf("Vowel");
        break;
    case  'e':
        printf("Vowel");
        break;
    case  'E':
        printf("Vowel");
        break;
    case  'i':
        printf("Vowel");
        break;
    case  'I':
        printf("Vowel");
        break;
    case  'O':
        printf("Vowel");
        break;
    case  'o':
        printf("Vowel");
        break;
    case  'u':
        printf("Vowel");
        break;
    case  'U':
        printf("Vowel");
        break;
    
    default: printf("consonant");
        break;
    }
    return 0;
}