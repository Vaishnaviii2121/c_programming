#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description : To Check number Number is Eevn or Odd
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    int iRem = 0;
    iRem = iNo%2;

    if(iRem == 0)
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

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    printf("Result is : %d\n",bRet);

    return 0;
}