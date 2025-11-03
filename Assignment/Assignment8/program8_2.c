///////////////////////////////////
//
//  input = 9,-3 
//  output = nine ,three.
//  input = 12 etc 
//  output = inavlid number
//  author = vaishnavi
//
///////////////////////////////////

#include<stdio.h>
void Display(int iNo)
{
    if(iNo==9)
    {
        printf("Nine");
    }
    else if (iNo==-3)
    {
        printf("Three");
    }
    else
    {
        printf("Invalid Number");
    }


}
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
