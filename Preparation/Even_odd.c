#include<stdio.h>
int main()
{
    printf("________________________________________\n");
    printf("Checking is number Even or Odd\n");
    printf("________________________________________\n");

    int num = 0;
    printf("Enter Number : \n");
    scanf("%d",&num);

    if(num % 2 == 0 )
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}
