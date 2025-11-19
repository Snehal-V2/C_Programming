#include <stdio.h>

double CircleArea(float fRadius)
{
    double Area = 0; 
    const float PI = 3.14;

    Area =  PI * (fRadius * fRadius);
    return Area;

}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter the value of radius:\n");
    scanf("%f",&fValue);
    

    dRet= CircleArea(fValue);
    printf("The are of circle is :%lf\n",dRet);

    return 0;
}