#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please enter you full Name\n");
    scanf("%[^\n]",Name);
   
    printf("Your Full Name is: %s\n", Name);




    return 0;
}