#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountSmall
//  Description   : Accept string from user and count number of small characters
//  Input         : "Marvellous"
//  Output        : 9
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////

int CountSmall(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str >='a' && *str <='z')
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

    iRet = CountSmall(arr);

    printf("%d",iRet);
    
    return 0;
}