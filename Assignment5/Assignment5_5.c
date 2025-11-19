#include<stdio.h>

int FindLargest (int x,int y,int z)
{
  
  if (x >= y && x >= z)
  {
    return x;
  }
  else  if (y >= x && y >= z)
  {
   return y;
  }
  
  else
  {
    return z;
  }
  

}

int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0 ,iRet = 0; 
    
    printf("Enter the numberr:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
 
    
    iRet = FindLargest(iValue1, iValue2, iValue3);

    printf("The largest number is: %d\n", iRet);
  
    return 0;
}