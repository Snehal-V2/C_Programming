#include<stdio.h>
#include<stdbool.h>

int MultDigits(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0,iNum = 1;
    
     while (iNo!= 0)
    {   
        iDigit = iNo % 10;
        
        if(iDigit != 0)
        {
            iNum = iNum*iDigit;
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
    iRet = MultDigits(iValue);
    printf("The multiplication of digits the given number: %d",iRet);
    
}