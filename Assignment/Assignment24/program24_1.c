#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Maximum
//  Description   : Returns largest number
//  Input         : Integer array, length, number
//  Output        : Largest number
//
////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;     

    for(iMax = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0,iRet = 0;
    int *p = NULL;

    printf("Enter numebr of elements");
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
    iRet = Maximum(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0;
}
