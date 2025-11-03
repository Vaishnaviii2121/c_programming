#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description : Maximum of Two numbers.
//  Input : int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }

}

int main()
{
    int num1,num2, result;

    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);

    result = FindMax(num1, num2);
    printf("Maximum is %d\n",result);

    return 0;
}