#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description : Accept N numbers from user and return difference between frequency of even number and odd numbers
//  Input : int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  16/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int eFrequency = 0;
    int oFrequency=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)   
        {
            eFrequency++;
        }
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)   
        {
            oFrequency++;
        }
    }
    return eFrequency-oFrequency;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements :%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Frequency(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}