#include<stdio.h>

void print_factors(int number)
{
    int iCnt = 0;
   

    if (number <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for (iCnt = 1; iCnt <= number; iCnt++)
    {
       if (number % iCnt == 0)
       {
        printf(" %d ",iCnt);
       }
    }


}

int main()
{
    int number=0;

    printf("Enter Number :");
    scanf("%d",&number);

    print_factors(number);

    return 0;
}