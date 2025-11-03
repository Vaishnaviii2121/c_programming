#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description : Accept one character from user and convert case of that character.
//  Input : char
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
   if((cValue >= 'a')&&(cValue <= 'z'))
    {
        printf("%c",cValue-32);
    }
   else if((cValue >= 'A')&&(cValue <= 'Z'))
    {
        printf("%c",cValue+32);
    }
    else
    {
        printf("%c",cValue);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}