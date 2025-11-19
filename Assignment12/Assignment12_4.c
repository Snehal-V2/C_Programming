#include<stdio.h>

int Sum_Even_Factors(int number)
{
    int iCnt = 0;
    int iFrequency = 0;

    if (number <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    for (iCnt = 1; iCnt < number; iCnt++)
    {
        if (number % iCnt == 0 && iCnt%2 == 0)
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

    iRet = Sum_Even_Factors(number);
    printf("Sum of Even factors: %d\n", iRet);

    return 0;
}