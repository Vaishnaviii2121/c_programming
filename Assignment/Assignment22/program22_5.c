#include<stdlib.h>
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description : Accept N numbers from user and accept one another number as NO, return frequency of NO form it
//  Input : int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iFrequncy=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
           iFrequncy++; 
        }
        return iFrequncy;
    }

}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0,iValue=0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    printf("Enter number to check frequncy:\n");
    scanf("%d",&iValue);

    Ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]); 
    }

    iRet = Frequency(Ptr, iSize,iValue);

    printf("Frequncy of 11 is: %d\n",iRet);

    free(Ptr);
    return 0;
}
