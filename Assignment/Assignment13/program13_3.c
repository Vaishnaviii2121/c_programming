#include<stdio.h>
void print_odd_numbers(int limit)
{
    int i= 0;
    for(i = 1;i<=limit;i++)
    {
        if((i%2)!=0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int limit= 0;

    printf("Enter number: ");
    scanf("%d",&limit);

    print_odd_numbers(limit);

    return 0;
}
