#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description   : Accept string from user and return difference between small and large characters
//  Input         : "MarvellouS"
//  Output        : contains vowel
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


bool ChkVowel(char * str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if(*str=='a' ||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
            *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            return true;
        }
        str++;
    }
    return false;
}

//////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function
//
//////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if (bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no vowel");
    }
    
    return 0;
}