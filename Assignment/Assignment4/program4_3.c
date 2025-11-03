#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description : Accept number from user and Display its all non-Factors.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;

    for(i = 1;i<iNo;i++)
    {
        if((iNo%i)!=0)
        {
            printf("%d",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}