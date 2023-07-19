#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d",&age);

    printf("age in 2023 is : %d\n",age);
    printf("age in 2022 is : %d\n",--age);
    printf("age in 2024 is : %d\n",++age);
    printf("age in 2026 is : %d\n",age+3);

    return 0;

}