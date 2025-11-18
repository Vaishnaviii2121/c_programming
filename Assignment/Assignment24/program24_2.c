#include<stdio.h>
#include<stdlib.h>

typedef int* IPTR;

////////////////////////////////////////////////////////////////
// 
//  Function Name : Minimum
//  Description   : Returns smallest number
//  Input         : Integer array, length, number
//  Output        : smallest number
//
////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;     

    for(iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0,iRet = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter number");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n :");

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements :%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Minimum(p,iSize);

    printf("Smallest number is%d",iRet);

    free(p);

    return 0;
}