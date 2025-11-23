#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accept number of rows and number of columns from user and display Pattern
//  Input : int ,int 
//  Output : A  A   A   A   A   
//           B  B   B   B   B
//           C  C   C   C   C
//  Author : Vaishnavi
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%c\t",ch);
        }
        ch++;
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}