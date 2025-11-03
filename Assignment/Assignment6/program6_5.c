#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description : calculate percentage of marks.
//  Input : int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  27/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int toatalMarks,int marks) 
{
    float num = 0.0f;
    num = (((float)marks/(float)toatalMarks)*100.0);
    return num;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("percentage :%f",fRet);

    return 0;
}