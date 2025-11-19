#include<stdio.h>

void CheckNumberType (int iNo)
{
  
  if (iNo > 0)
  {
    printf("This  number is positive \n");
  }
  else  if (iNo < 0)
  {
    printf("This  number is negative \n");
  }
  else
  {
    printf("This  number is Zero\n");
  }
  

}

int main()
{
    int iValue = 0;
    
    printf("Enter the numberr:");
    scanf("%d",&iValue);
 
    CheckNumberType(iValue);
   
  
    return 0;
}