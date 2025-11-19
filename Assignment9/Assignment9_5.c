
#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iFact1 = 1, iFact2 = 1,iDiff = 0 , iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2 != 0)
        {
            iFact1 = iFact1*iCnt; 
        }
        else if (iCnt %2 == 0)
        {
            iFact2 = iFact2*iCnt;
        }


    }
    return iDiff = (iFact2-iFact1);
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter your Number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    
    printf("Factorial Difference %d\n",iRet);

    return 0;
}