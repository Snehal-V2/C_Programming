#include<stdio.h>

void Display_Digits(int iNo)
{
    if (iNo<0)
    {
        iNo = -iNo;
    }
    int iDigit=0;

    while(iNo != 0)
    {   
        iDigit = iNo%10;
        printf("%d\n",iDigit);
        iNo = iNo/10;
    }
}
//Time Complexity N
int main ()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);
    Display_Digits(iValue);
    
}