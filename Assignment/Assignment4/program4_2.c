#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description : Accept number from user and Display its Factors in decreasing order.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo-1;iCnt>=1;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}