#include<stdio.h>
void print_numbers(int limit)
{
    int i =0;
    for(i = 0;i<=limit;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int limit;

    printf("Enter Number : ");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;
}
