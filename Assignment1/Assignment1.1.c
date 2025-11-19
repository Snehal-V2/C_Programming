#include<stdio.h>

// divide by two numbers

int DivisionByTwoNumbers(int iNo1, int iNo2)
{
    if (iNo2 <= 0)
    {
        return -1;
    }
    int iAns= 0;
    iAns = iNo1/iNo2;
    return iAns;

}
int main()
{
    int iValue1=15, iValue2=5;
    int iRet = 0;
    // printf("Enter first number\n");
    // scanf("%d", &iValue1);
    // printf("Enter first number\n");
    // scanf("%d", &iValue2);

    iRet = DivisionByTwoNumbers(iValue1,iValue2);
    printf("Division of two number is %d",iRet);
    
    return 0;
}