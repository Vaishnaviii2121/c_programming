#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description : Check Even or Odd.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if(num%2==0)
    {
        printf(" Even Number");
    }
    else
    {
        printf("Odd Number");
    } 
}

int main()
{
    int number;

    printf("Enter number :");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}
