#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description : To print * 
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  23/10/2025
//
////////////////////////////////////////////////////////////////


void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}