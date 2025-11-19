#include<stdio.h>
void OddDisplay(int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 1  ; iCnt<= iNo; iCnt++)
    {
        if(iCnt%2 !=0 && iCnt < 15)
        {
        printf(" %d ",iCnt);

        } 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter you Number \n");
    scanf("%d",&iValue);


    OddDisplay(iValue);
    return 0;
}