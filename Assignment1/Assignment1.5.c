#include<stdio.h>


// divisible by 5 or not
void Accept (int iNo)
{
  int iCnt = 0;
  for (iCnt=1; iNo >= iCnt; iCnt++)
  {
    printf("*");
  }
}

int main()
{
    int iValue=0;
   
    
    printf("Enter Number\n");
    scanf("%d", &iValue);

    Accept(iValue);
    return 0;

}