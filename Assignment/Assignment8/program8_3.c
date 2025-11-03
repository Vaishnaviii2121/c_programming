// no negative input
#include <stdio.h>

int factorial(int iNo) 
{   
    int i, fact = 1;
    for(i = 1; i <= iNo; i++)
        fact = fact * i;
    return fact;
}

int main() {
    int iValue =0,iRet = 0;
    printf("Enter a number: ");
    scanf("%d", &iValue);


    iRet = printf("Factorial of %d = %d", iValue, factorial(iValue));

    return 0;
}
