#include <stdio.h>

void Print_Numbers(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

//Time Complexity N
int main ()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    Print_Numbers(iValue);
}