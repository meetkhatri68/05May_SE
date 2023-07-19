#include <stdio.h>
// define structure
union Stdata
{
    // data member - variable which was define inside the strucure
    int id;
    char nm[20];
};
int main()
{
    /* code */
    union Stdata st[5]; // create object of type "Stdata"
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter your id: ");
        scanf("%d", &st[i].id); // Use the data member
        printf("Enter your name: ");
        scanf("%s", &st[i].nm);
    }
    printf("\nId\tName\tsub1\tsub2\tsub3\ttotal\tper\tresult \n");
    for(i = 0; i < 3; i++)
    {
        // printf("\n1------------------------%s--------------------------\n", st[i].nm);
        printf("__________________________________________________");
        printf("\n%d |\t %s |\n", st[i].id, st[i].nm);
    }
    return 0;
}
