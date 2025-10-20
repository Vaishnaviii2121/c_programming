#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even Number\n");
    }
    else
    {
        printf("It is Odd number\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}
