#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accept string from user and count number of white spaces.
//  Input         : "Marvellous Infosystem"
//  Output        : 1
//  Author        : Vaishnavi
//  Date          : 30/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str ==' ')
        {
           iCnt++;
        } 
        str++;
    }
    return iCnt;
}

//////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}