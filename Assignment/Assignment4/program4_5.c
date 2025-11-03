#include<stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description : Accept number from user and return difference between summation of all its Factors and non factors.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  25/10/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFactors = 0;
    int iSumNonFactors = 0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSumFactors = iSumFactors+iCnt;
        }
        else
        {
            iSumNonFactors = iSumNonFactors+iCnt;
        }
    }
    return iSumFactors - iSumNonFactors;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    
    return 0;
}