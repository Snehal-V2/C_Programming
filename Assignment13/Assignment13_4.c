
#include <stdio.h>

int Sum_Even_Numbers(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0,iSum= 0;
     for(iCnt =1; iCnt <= iNo; iCnt++)
        {
        if(iCnt % 2 == 0)
        {
            iSum = iSum+iCnt;
        }
        
         }
         return iSum;
}

//Time Complexity N
int main ()
{
    int iLimit = 0,iRet= 0;

    printf("Enter the Number\n");
    scanf("%d",&iLimit);

    iRet = Sum_Even_Numbers(iLimit);
    printf("The Even numbers are:%d",iRet);
}