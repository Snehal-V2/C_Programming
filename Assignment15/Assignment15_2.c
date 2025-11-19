#include<stdio.h>
#include<stdbool.h>

int Count_Odd(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0,iOdd = 0;
    
     while (iNo != 0)
    {   
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iOdd++;
        }
        iNo = iNo / 10;
        
    }return iOdd;
    
}
//Time Complexity N
int main ()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    iRet = Count_Odd(iValue);
    printf("The Frequency of  odd digits the given number: %d",iRet);
    
}