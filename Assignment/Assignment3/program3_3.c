#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description : Accept number from user and print even factors of that number.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if((iNo%i==0)&&(i % 2 ==0))
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");

    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}