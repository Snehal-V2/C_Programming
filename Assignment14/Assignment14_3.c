#include<stdio.h>
#include<stdbool.h>

int Count_Frequency(int iNo)
{
        
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iDigit = 0,iFrequency = 0;
    
     while (iNo != 0)
    {   
        iDigit = iNo % 10;
        if (iDigit == 2)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
        
    }return iFrequency;
    
}
//Time Complexity N
int main ()
{
    int iValue = 0,iRet = 0;
    

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    iRet = Count_Frequency(iValue);
    printf("The Frequency of 2 in the given number: %d",iRet);
    
}