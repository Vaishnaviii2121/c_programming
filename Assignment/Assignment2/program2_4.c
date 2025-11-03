/*

Input:  12  5
Output: 12  12  12  12  12

Input: -2   3
Output:-2  -2   -2

Input: 21  -3
Output:21   21  21

Input: -2   0
Output:

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : To Display first number in second no. of times.
//  Input : int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
////////////////////////////////////////////////////////////////

Display(int iNo, int iFrequency)
{
int iCnt = 0;

if(iCnt<0)
{
    iCnt=-iCnt;
}

for(iCnt=1;iCnt<=iFrequency;iCnt++)
{
    printf("%d\t",iNo);
}
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    printf("Enter frequency\n");
    scanf("%d",&iCount);
        
    Display(iValue,iCount);

    return 0;
}