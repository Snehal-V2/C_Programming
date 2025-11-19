#include <stdio.h>

double  SquareMeter(int iValue)
{
    double dConvert= 0;
     const double  dFeet = 0.0929;
     dConvert = (iValue * dFeet);

     return dConvert;
}

int main()
{
   int iValue = 0;
   double dRet = 0.0f;


    printf("Enter the distance in square feet:\n");
    scanf("%d",&iValue);
    

    dRet= SquareMeter(iValue);
    printf("The distance in meter is :%lf\n",dRet);

    return 0;
}