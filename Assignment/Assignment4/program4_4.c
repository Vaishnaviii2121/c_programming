#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MulFact
//  Description : Accept number from user and return summition of all its non Factors.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int i = 0;

    int iSum = 0;

    if(iNo<=0)
    {
        return 0;
    }

    for(i=1;i<iNo;i++)
    {
        if(iNo%i != 0)
        {
            iSum = iSum+i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);
    
    return 0;
}