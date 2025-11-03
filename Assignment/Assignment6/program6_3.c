#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description : Check Numbers Equal or not.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    
    bool bRet = false;

    printf("Please enter two numbers");

    scanf("%d%d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}