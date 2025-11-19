
#include <stdio.h>

double FahrenheightToCelcius(float fTemp)
{
    double dConvert = 0; 
    const float  fnum = (5.0/9.0);
    dConvert  = ((fTemp -32 )* fnum);
     
    return dConvert;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter the temperature in Fahrenheight:\n");
    scanf("%f",&fValue);
    

    dRet= FahrenheightToCelcius (fValue);
    printf("The temperature in celcius is :%f\n",dRet);

    return 0;
}