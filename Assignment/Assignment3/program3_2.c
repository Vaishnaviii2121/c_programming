#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description : Accept number from user and To print  even factors of that number.
//  Input : int
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(iNo%i==0)
        {
            if(i%2==0)
            {
                 printf("%d\t",i);
            }
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}