
#include <stdio.h>

float DollarToINR(float fNo)
{
    float fCnt = 0.0f;
    fCnt = fNo * 83.25;
    return fCnt;
}
int main()
{
    float fValue = 0.0f; 
    float fRet = 0.0f;

    printf("Enter your Number of USD\n");
    scanf("%f",&fValue);

    fRet = DollarToINR(fValue);
    printf("Value in INR is : %f",fRet);

    return 0;
}