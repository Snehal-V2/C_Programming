#include<stdio.h>

void CheckLeapYear(int year)
{
  

  if (year % 400 == 0)
  {
    printf("This is leap year\n");
  }
  else if (year % 100 == 0)
  {
    printf("This is not leap year\n");
  }
  else if (year % 4 == 0)
  {
    printf("This is leap year\n");
  }
  else
 {
    printf("This is not leap year\n");
  }

}

int main()
{
    int yr = 0;
    
    printf("Enter the year:");
    scanf("%d",&yr);
 
    CheckLeapYear(yr);
   
  
    return 0;
}