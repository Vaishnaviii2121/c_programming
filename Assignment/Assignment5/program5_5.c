#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description : Finding Largest Number among three Numbers.
//  Input : int,int,int
//  Output :int
//  Author : Vaishnavi
//  Date :  26/10/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int  FindLargest(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        {
            return x;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if(y>z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}
int main()
{
    int a,b,c,result;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);

    result=FindLargest(a,b,c);
    printf("Largest number is :%d\n",result);
    return 0;
}
