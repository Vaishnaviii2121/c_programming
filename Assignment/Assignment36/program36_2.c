#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accept string from user and convert it into UPPER case.
//  Input         : "Marvellous Multi OS"
//  Output        : "MARVELLOUS MULTI OS"
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void struprx(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >='a' && *str <='z')
        {
            *str-=32;
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

    struprx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}