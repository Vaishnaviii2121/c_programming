#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MulFact
//  Description : Accept number from user and Display its Multiplication of Factors.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  25/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int MulFact(int iNo)
{
    int iMult = 1;
    int i = 0;

    for (i = 1; i<=iNo;i++)
    {
        if((iNo%i)==0)
        {
            iMult=iMult*i;
        }
    }
    return iMult;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d",iRet);

    return 0;
}
