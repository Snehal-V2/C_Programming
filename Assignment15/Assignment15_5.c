#include<stdio.h>
#include<stdbool.h>

int CountDiff(int iNo)
{
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0,iNum1 = 0,iNum2=0;
    
     while (iNo!= 0)
    {   
        iDigit = iNo % 10;
        
        if(iDigit%2 == 0)
        {
            iNum1 = iNum1 + iDigit;
        }
        
        if(iDigit%2 != 0)
        {
            iNum2 = iNum2 + iDigit;
        }
        iNo = iNo / 10;
        
    }return iNum1 - iNum2;
    
}
//Time Complexity N
int main ()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    iRet = CountDiff(iValue);
    printf("The Difference  between even and odd digits is : %d",iRet);
    
}