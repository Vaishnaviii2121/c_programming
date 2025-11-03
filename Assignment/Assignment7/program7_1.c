
#include<stdio.h>

void Pattern(int iNo)
{
    if (iNo > 0)
    {
        for (int i = 1; i <= iNo; i++)
        {
            if (i % 2 != 0) 
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
            }
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}
