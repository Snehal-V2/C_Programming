#include<stdio.h>



int MultiNumber(int iNo1,int iNo2,int iNo3)
{
    int iResult = 0;
    {
        iResult = iNo1 *iNo2* iNo3;
    }
    return iResult;


}



int main()
{
   int iValue1=0, iValue2=0, iValue3=0 ;
   int iRet = 0; 
   
    printf("Please enter the numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2, &iValue3);
    
   iRet = MultiNumber(iValue1,iValue2,iValue3);
   printf("The multiplication of number is : %d",iRet);


    return 0;
}