#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description : multiplication of numbers.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int a,int b,int c)
{
    int iMul = a*b*c;

    if((a||b||c)==0)
    {
        return 0;
    }

    return iMul;

}
int main()
{
    int iValue1 = 0,iValue2 = 0,iValue3 = 0, iRet = 0;

    printf("Please enter three numbers");

    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication :%d",iRet);

    return 0;
}