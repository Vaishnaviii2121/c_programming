#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   To print *
//  Input : integer
//  Output :    *
//  Author :Vaishnavi
//  Date : 21/10/2025
//
///////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
