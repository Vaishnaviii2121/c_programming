#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkGreater
//  Description : Check no. is greater than 100 or not.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iCnt)
{
    if(iCnt>100)
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
    int iValue = 0;

    bool bRet = false;

    printf("please enter number");

    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}