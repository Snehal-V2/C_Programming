#include <stdio.h>

void Print_Odd_Numbers(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0,iEven= 0;
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf(" %d ", iCnt);
        }
    }

}
    

//Time Complexity N
int main ()
{
    int iLimit = 0,iRet= 0;

    printf("Enter the Number\n");
    scanf("%d",&iLimit);

    Print_Odd_Numbers(iLimit);
   return 0;
}