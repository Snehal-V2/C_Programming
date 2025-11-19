
#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    for (iCnt = iEnd; iCnt >= iStart ;iCnt--)
    { 
        printf(" %d ",iCnt);
       
    }
     
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    return 0;
}