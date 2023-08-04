#include<stdio.h>
int total,amount,yn,total1;
int Menu()
{
    int menu,n;
    printf("------------MENU--------------");
    printf("\n1.Pizza        Price=180/pcs");
    printf("\n2.Burger       Price=100/pcs");
    printf("\n3.Dosa         Price=120/pcs");
    printf("\n4.Idli         Price=50/pcs");
    printf("\n----------------------------------");
    printf("\nPlease Enter Your Choice.: ");
    scanf("%d",&menu);
    printf("\n----------------------------------");
    total=amount;
    switch (menu)
    {
    case 1:
        {   
            printf("\nYou Have Selected Pizza.");
            printf("\n----------------------------------");
            printf("\nEnter The Quantity: ");
            scanf("%d",&n);
            printf("\n----------------------------------");
            amount=180*n;
            printf("\nAmount: %d",amount);
            printf("\n----------------------------------");
        }
        break;
    case 2:
        {
            printf("\nYou Have Selected Burger.");
            printf("\n----------------------------------");
            printf("\nEnter The Quantity: ");
            scanf("%d",&n);
            printf("\n----------------------------------");
            amount=100*n;
            printf("\nAmount: %d",amount);
            printf("\n----------------------------------");
        }
        break;
    case 3:
        { 
            printf("\nYou Have Selected Dosa.");
            printf("\n----------------------------------");
            printf("\nEnter The Quantity: ");
            scanf("%d",&n);
            printf("\n----------------------------------");
            amount=120*n;
            printf("\nAmount: %d",amount);
            printf("\n----------------------------------");
        }
        break;
    case 4:
        {
            printf("\nYou Have Selected Idli.");
            printf("\n----------------------------------");
            printf("\nEnter The Quantity: ");
            scanf("%d",&n);
            printf("\n----------------------------------");
            amount=50*n;
            printf("\nAmount: %d",amount);
            printf("\n----------------------------------");
        }
        break;
    }
    printf("\nYour Total Amount is: %d",amount);
    printf("\n----------------------------------");
}
int moreorder()
{
    printf("\nPress 1 for More Order otherwise 0 for Nothing: ");
    scanf("%d",&yn);

    if (yn==1)
    {
        Menu();
        total1=amount+total;
        total=total1;
        amount=total;
        printf("\nTotal Amount is: %d",total);
        moreorder();
    }
    else
    {
        printf("\n----------------------------------");
        printf("\nThank You Visit Again");
    }
}
int main()
{
    Menu();
    moreorder();
    return 0;
}
