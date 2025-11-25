#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accepting number of rows and columns from user and display Pattern
//  Input : iRow = 5   iCol = 5
//  Output : 
//                  1   2   3   4   5
//                  1   2           5 
//                  1       3       5
//                  1           4   5 
//                  1   2   3   4   5 
//  Author : Vaishnavi
//  Date : 25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i, j;

    if(iRow != iCol)
    {
        printf("Please enter the row and column same: \n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
          
            else if(j == 1 || j == iCol)
            {
                printf("%d\t", j);
            }

            else if(j == i)
            {
                printf("%d\t", j);
            }
            
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////
//
// Entry point function
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter a number of Rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
