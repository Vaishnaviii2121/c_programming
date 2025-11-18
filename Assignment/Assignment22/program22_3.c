#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description : Accept N numbers from user check whether that numbers contains 11 in it or not 
//  Input : int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  16/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            return true;
        }
    }
    return false;   
}

int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]); // FIXED
    }

    bRet = Check(Ptr, iSize);

    if(bRet==true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not present");
    }

    free(Ptr);
    return 0;
}
