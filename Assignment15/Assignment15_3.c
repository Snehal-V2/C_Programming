#include<stdio.h>
#include<stdbool.h>

int Count_Digits(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0,iNum = 0;
    
     while (iNo != 0)
    {   
        iDigit = iNo % 10;
        if (iDigit >3 && iDigit < 7)
        {
            iNum++;
        }
        iNo = iNo / 10;
        
    }return iNum;
    
}
//Time Complexity N
int main ()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    iRet = Count_Digits(iValue);
    printf("The sum of digits the given number: %d",iRet);
    
}