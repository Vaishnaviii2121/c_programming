#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accepting number of rows and columns from user and display Pattern
//  Input : iRow = 6    iCol = 6
//  Output : 
//                   *   *   *   *    *   *                        
//                   *   #   #   #    *   *
//                   *   #   #   *    $   *
//                   *   #   *   $    $   *
//                   *   *   $   $    $   *
//                   *   *   *   *    *   *
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
                printf("*\t");
            }
            else if(j == 1 || j == iCol)          
            {
                printf("*\t");
            }
            else if(j < i && j < (iCol - i + 1))  
            {
                printf("#\t");
            }
            else if(j > i && j > (iCol - i + 1))  
            {
                printf("$\t");
            }
            else if(j == i)                       
            {
                printf("*\t");
            }
            else if(j == (iCol - i + 1))         
            {
                printf("*\t");
            }
            else if(j < i && j > (iCol - i + 1)) 
            {
                printf("#\t");
            }
            else if(j > i && j < (iCol - i + 1))  
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");                    
            }
        }
        printf("\n");
    }
}

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
