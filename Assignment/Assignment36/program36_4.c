#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accept string from user and display only digits from that string.
//  Input         : "marve89llous121"
//  Output        : 89121
//  Author        : Vaishnavi
//  Date          : 30/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >='0' && *str <='9')
        {
           printf("%c",*str);
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

    DisplayDigit(arr);

    return 0;
}