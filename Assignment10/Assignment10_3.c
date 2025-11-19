#include <stdio.h>

int KMtoMeter(int iDistance)
{
     int iConvert= 0;
     const int iKM = 1000;
     iConvert = (iDistance * iKM);

     return iConvert;
}

int main()
{
   int iValue = 0,iRet = 0;


    printf("Enter the distance:\n");
    scanf("%d",&iValue);
    

    iRet= KMtoMeter(iValue);
    printf("The distance in meter is :%d\n",iRet);

    return 0;
}