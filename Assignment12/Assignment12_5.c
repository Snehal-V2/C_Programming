#include<stdio.h>
#include<stdbool.h>

bool is_Divisible_by_five(int number)
{
    if (number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false; 
    }
}

int main()
{
    int number = 0;

    printf("Enter Number: ");
    scanf("%d", &number);
    
    printf("%s\n", is_Divisible_by_five(number) ? "Yes" : "No");

    return 0;
}