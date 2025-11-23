#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Accept number from user and display Pattern
//  Input : iRow = 4    iCol =4
//  Output : A  B   C   D   
//           A  B   C   D
//           A  B   C   D  
//           A  B   C   D 
//  Author : Vaishnavi
//  Date : 23/11/2025
//
///////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';

    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch = 'A';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
