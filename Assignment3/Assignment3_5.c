#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

bool CheckVowel(char CValue)
{
    CValue = tolower(CValue);

   if(CValue == 'a' || CValue == 'e'|| CValue == 'i'|| CValue == 'o'|| CValue == 'u')
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
    char cValue = '\0';
    bool bRet = false;
    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    if (bRet == true)
    {
        printf("It is a vowel.\n");
    }
    else
    {
        printf("It is not a vowel.\n");
    }
    

    return 0;
}