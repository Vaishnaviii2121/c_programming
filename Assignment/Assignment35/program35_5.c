#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Accept string from user and reverse it.
//  Input         : "MarvellouS"
//  Output        : "SuollevraM"
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char * str)
{
    char *temp = str;

    while (*str != 0)
    {
        str++;
    }

    while(str>=temp)
    {
        printf("%c",*str);
        str--;
    }

    printf("\n");  
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

    Reverse(arr);
    
    return 0;
}