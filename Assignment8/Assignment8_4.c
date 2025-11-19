#include<stdio.h>
void Table(int iNo)
{
   int iCnt = 0;
   int iFact = 0;
   if(iNo <0)
   {
    iNo = -iNo;
   }
   for(iCnt = 1; iCnt<=10; iCnt++)
   {
    iFact =iNo * iCnt;
    printf(" %d ",iFact);
   }
   
   
}



int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number\n");
    scanf("%d",&iValue);


    Table(iValue);
    
    return 0;
}