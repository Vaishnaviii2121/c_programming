#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;
bool ChkVowel(char);

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description : To check whether vowel or not
//  Input : char
//  Output :int
//  Author : Vaishnavi
//  Date :  24/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

bool ChkVowel(char ch )
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter Character\n");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Vowel");
    }
    else
    {
        printf("It is Not Vowel");
    }

    return 0;
}