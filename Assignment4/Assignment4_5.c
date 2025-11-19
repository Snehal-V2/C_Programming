#include <stdio.h>

int FactDiff (int iNo)
{
    int iCnt = 0;
    int iFact= 0;
    int iNonFact = 0;
    int iDiff =0;
    for(iCnt = 1 ; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
            
        else
        {
         
            iFact = iFact + iCnt;
            
        }
        iDiff = iFact - iNonFact;
    }
   
    printf("Sum of Factors: %d\n", iNonFact);
    printf("Sum of Factors: %d\n", iFact);
    
    printf("The difference of sum of factors and non-factors is: %d (%d - %d)\n", iDiff, iFact, iNonFact);

    return iDiff;
}
    

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number: ");
    scanf("%d", &iValue);
    
    iRet = FactDiff(iValue);
   
    
    return 0;
}