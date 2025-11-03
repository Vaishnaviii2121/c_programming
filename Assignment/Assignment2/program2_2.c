#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : To print * by Accepting number from user
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  23/10/2025
//
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}