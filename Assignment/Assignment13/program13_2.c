#include<stdio.h>
void   print_even_numbers( int limit)
{
    int i =0;
    for(i=0;i<=limit;i+=2)
    {
        if((limit%2)==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int limit= 0;

    printf("Enter NUmber : ");
    scanf("%d",&limit);

    print_even_numbers(limit);

    return 0;
}
