//////////////////////////////////////////////////////////////////////////
//
//      Required header files
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                           //for input output
#include<stdbool.h>                                         // for bool datatype

//////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  description : it is used to check even odd
//  input : integer
//  output :    boolean
//  Author :    vaishnavi
//  Date : 10
//
//////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    { return true;   }
    else
    { return false;  }
}

//////////////////////////////////////////////////////////////////////////
//
//      entry point function of the application
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is Even no \n",iValue); }
    else
    { printf("%d is Odd number\n",iValue); }

    return 0;
}