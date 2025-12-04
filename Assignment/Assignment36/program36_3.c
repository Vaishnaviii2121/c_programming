#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accept string from user and toggle the case.
//  Input         : "Marvellous Multi OS"
//  Output        : "mARVELLOUS mULTI OS"
//  Author        : Vaishnavi
//  Date          : 30/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

void strtogglex(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >='a' && *str <='z')
        {
           *str = *str-32;
        } 
        else if(*str >='A' && *str <='Z')
        {
            *str = *str+32;
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

    strtogglex(arr);

    printf("Modified string is : %s",arr);

    return 0;
}