#include <stdio.h>

double RectArea(float fWidth , float fHeight)
{
    double Area = 0; 
    Area = (fWidth * fHeight);
    return Area;

}

int main()
{
    float fValue1 = 0,fValue2= 0;
    double dRet = 0;

    printf("Enter the value of width and height:\n");
    scanf("%f %f",&fValue1,&fValue2);
    

    dRet= RectArea(fValue1,fValue2);
    printf("The are of rectangle is :%lf\n",dRet);

    return 0;
}