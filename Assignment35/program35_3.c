#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiiference
//  Description   : Accept string from user and return difference between small and large characters
//  Input         : "MarvellouS"
//  Output        : 6 (8-2)
//  Author        : Vaishnavi
//  Date          : 29/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDifference(char * str)
{
    int iCnt = 0;

    int iCountSmall = 0;
    int iCountCapital  = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }

    return iCountSmall-iCountCapital;
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

    iRet = CountDifference(arr);

    printf("%d",iRet);
    
    return 0;
}