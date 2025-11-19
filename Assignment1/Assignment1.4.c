#include<stdio.h>
#include<stdbool.h>

// divisible by 5 or not
int DivisionCheck(int iNo)
{
  if((iNo%5)== 0)
  {
    return true;
  }
  else
  {
    return false;
  }

}

int main()
{
    int iValue=0;
    bool bRet = false;
    
    printf("Enter Number");
    scanf("%d", &iValue);

    bRet = DivisionCheck(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;

}