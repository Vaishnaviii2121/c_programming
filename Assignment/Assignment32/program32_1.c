#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accepting number of rows and columns from user and display Pattern
//  Input : iRow = 4    iCol = 4
//  Output : *  *  *  #
//           *  *  #  *
//           *  #  *  *
//           #  *  *  *
//  Author : Vaishnavi
//  Date : 25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    for(int i = 0; i < iRow; i++) {
        for(int j = 0; j < iCol; j++) {

            if (j == iCol - 1 - i)   
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
