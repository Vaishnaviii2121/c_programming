#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return((iNo % 2)== 0);             // not good programming practice but for predict the output
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

     bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even no \n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}

