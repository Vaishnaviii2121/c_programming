#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : FirstOcc
//  Description   : Returns index of first occurrence of a number
//  Input         : Integer array, length, number
//  Output        : Integer index OR -1
//  Author        : Vaishnavi
//  Date          : 17/11/25
//
////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)        // Found number
        {
            return iCnt;            // return index
        }
    }

    return -1;                      // Not found
}

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0, iValue = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));

    if(Ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    printf("Enter number to search:\n");
    scanf("%d", &iValue);

    iRet = FirstOcc(Ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("Number not found\n");
    }
    else
    {
        printf("First occurrence of number is at index %d\n", iRet);
    }

    free(Ptr);
    return 0;
}
