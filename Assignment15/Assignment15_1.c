#include<stdio.h>
#include<stdbool.h>

int Count_Even(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0,iEven = 0;
    
     while (iNo != 0)
    {   
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iEven++;
        }
        iNo = iNo / 10;
        
    }return iEven;
    
}
//Time Complexity N
int main ()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    iRet = Count_Even(iValue);
    printf("The Frequency of  even digits the given number: %d",iRet);
    
}