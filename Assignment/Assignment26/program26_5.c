#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accept number from user and display Pattern
//  Input : 8
//  Output : 2  4   6   8   10  12  14  16
//  Author : Vaishnavi
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
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