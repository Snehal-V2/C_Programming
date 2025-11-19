#include<stdio.h>
#include<stdbool.h>


bool GreaterNumber(int iNo)
{
    if (iNo >100)
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main()
{
   int iValue=0; 
   bool bRet = false;
    printf("Please enter the number\n");
    scanf("%d",&iValue);
    

    bRet = GreaterNumber(iValue);
    if(bRet == true)
    {
        printf("The given Number is greater");
    }
    else 
    {
        printf("The given Number is smaller");
    }



    return 0;
}