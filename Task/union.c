#include<stdio.h>
// define structure
union Stdata
{
    // data member - variable which was define inside the strucure
    int id;
    char nm[20];
}st; //define the object
int main()
{
    /* code */
    printf("Enter your name: ");
    scanf("%s", &st.nm);
    printf("Enter your id: ");
    scanf("%d", &st.id);
    printf("\nYour ID is %d and Name is %s\n", st.id, st.nm);
    return 0;
}