#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accept string from user and convert it into lower case.
//  Input         : "Marvellous Multi OS"
//  Output        : "marvellous multi os"
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void strlwrx(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >='A' && *str <='Z')
        {
            *str+=32;
        } 
        str++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}
