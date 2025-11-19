#include<stdio.h>

int Sum_Factors(int number)
{
    int iCnt = 0;
    int iFrequency = 0;

    if (number <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number % iCnt == 0)
        {
            iFrequency = iFrequency + iCnt;  
        }
    }

    return iFrequency;
}

int main()
{
    int number = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    iRet = Sum_Factors(number);
    printf("Sum of factors: %d\n", iRet);

    return 0;
}