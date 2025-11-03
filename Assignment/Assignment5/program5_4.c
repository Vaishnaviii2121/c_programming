#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description : Check positive ,negative or zero.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num == 0)
    {
        printf("zero");
    }
    else if (num > 0)
    {
        printf("positive number");
    }
    else
    {
        printf("Negative Number");
    }
}

int main()
{
    int number;
    printf("Enter number :");
    scanf("%d",&number);
    CheckNumberType(number);
    return 0;
}