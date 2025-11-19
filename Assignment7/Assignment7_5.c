#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt = 1;
    while (iCnt <= iNo)
    {
        printf(" %d ",iCnt*iNo);
        iCnt++;
    }
    
    
 
    

}

int main()
{
    int iValue = 0;

    printf("Enter you Number \n");
    scanf("%d",&iValue);


    MultipleDisplay(iValue);
    return 0;
}