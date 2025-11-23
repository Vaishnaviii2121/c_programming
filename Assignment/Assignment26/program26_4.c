#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accept number from user and display Pattern
//  Input : 4
//  Output : #  1   *   #   2   *   #   3   *   #   4   *
//  Author : Vaishnavi
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
   int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
    }

}
int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}