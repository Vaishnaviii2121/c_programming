#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description : Check leap year.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if ((year%4==0 && year % 100 !=0)||(year % 400 ==0))
    {
        printf("%d is Leap Year",year);
    }
    else
    {
        printf("%d is not Leap year",year);
    }
}

int main()
{
    int yr;

    printf("Enter year:");
    scanf("%d",&yr);

    CheckLeapYear(yr);
    
    return 0;
}