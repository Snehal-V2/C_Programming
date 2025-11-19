#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d (", iRet);

    int iCnt = 0;
    int first = 1;

    for (iCnt = 1; iCnt <= iValue / 2; iCnt++)
    {
        if (iValue % iCnt == 0)
        {
            if (first)
            {
                printf("%d", iCnt);
                first = 0;
            }
            else
            {
                printf(" * %d", iCnt);
            }
        }
    }

    printf(")\n");

    return 0;
}