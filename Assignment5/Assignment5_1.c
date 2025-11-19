#include<stdio.h>

void CheckEvenOdd(int inum)
{
    
    if (inum %2 == 0)
    {
      printf("The given Number is even");
    }
    else
    {
       printf("The given Number is odd");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter your Number\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);
    




    return 0;
}