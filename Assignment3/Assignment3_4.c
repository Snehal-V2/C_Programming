#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue)
{
   if(isupper(CValue))
   {
    CValue = tolower(CValue);
    printf(" %c ",CValue);
   }
    else if (islower(CValue))
    {
        CValue = toupper(CValue);
        printf(" %c ",CValue);
    }
    else
    {
        printf("You have not entered Character\n");
    }
}
   


int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
  
    

    return 0;
}