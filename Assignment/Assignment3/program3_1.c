#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description : Accept one number from user and To print that number of even numbers on screen.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return ;
    }
    int i = 1;

    int count = 0;
    while ((count<iNo))
    {
       if(i % 2 == 0)
       {
        printf("%d\t",i);
        count++;
       }
       i++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number \n");

    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
