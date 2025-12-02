#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Accept string from user and count number of Capital characters
//  Input         : "Marvellous Multi OS"
//  Output        : 4
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >='A' && *str <='Z')
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

    iRet = CountCapital(arr);

    printf("%d",iRet);

    return 0;
}
