#include <stdio.h>

int MultiNumber(int iNo1, int iNo2, int iNo3)
{
    int iResult = 1;
    int bHasPositive = 0;

    if (iNo1 > 0)
    {
        iResult *= iNo1;
        bHasPositive = 1;
    }
    if (iNo2 > 0)
    {
        iResult *= iNo2;
        bHasPositive = 1;
    }
    if (iNo3 > 0)
    {
        iResult *= iNo3;
        bHasPositive = 1;
    }

    if (bHasPositive == 0)
    {
        return 0;  // all were zero or negative
    }

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = MultiNumber(iValue1, iValue2, iValue3);
    printf("The multiplication of positive numbers is: %d\n", iRet);

    return 0;
}




