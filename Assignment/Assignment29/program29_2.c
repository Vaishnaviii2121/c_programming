#include <stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accept number from user and display Pattern
//  Input : 5
//  Output : A  B   C   D   E
//  Author : Vaishnavi
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        int num;

        if(i % 2 == 1)        // Odd row → start with even number (2)
            num = 2;
        else                  // Even row → start with odd number (1)
            num = 1;

        for(int j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
            num += 2;        // Increase by 2 each time
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}