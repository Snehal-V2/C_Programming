
// Count Frequency of Number
#include<stdio.h>
#include<stdlib.h>

typedef int* IPTR;
int FrequencyCounter(int Arr[], int iSize,int iNo)
{
    int icnt = 0, iCount =0;
    for(icnt =0 ; icnt< iSize; icnt++)
    {
        if(Arr[icnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;

}




int main()
{
    int iCnt = 0, iLength = 0, iRet = 0,iValue = 0;
    IPTR iPtr = NULL;

    // Entering size of an array of elements

    printf("Enter the number:\n");
    scanf("%d",&iLength);
    
    // Allocation of memory
    iPtr = (IPTR) malloc (iLength * sizeof(int));
 
    
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
   
    
    printf("Enter the elemetns : ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    // The number whose freqency needed
    printf("Enter the number whos frequency required :\n");
    scanf("%d",&iValue);

    //Step II-Use the memory
    iRet = FrequencyCounter(iPtr,iLength,iValue);
    printf("The frequency of number %d is : %d\n", iValue,iRet);


return 0;
}
