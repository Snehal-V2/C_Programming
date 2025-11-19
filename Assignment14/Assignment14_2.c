#include<stdio.h>
#include<stdbool.h>

int Check_Digits(int iNo)
{
       
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0;
     while (iNo != 0)
    {   
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return true;   
        }
        iNo = iNo / 10;
    }
    return false;  
}

//Time Complexity N
int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    bRet = Check_Digits(iValue);
    if(bRet == true)
    {
        printf("This contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    
}