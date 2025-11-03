#include<stdio.h>
void DollarToINR(int iNo)      
{
    int iRet=0; 
    iRet=iNo*70;               
    printf(" In indian currency rupees%d", iRet);
}

int main()
{
    int iValue=0;
   
    printf("Enter a Doolar");
    scanf("%d",&iValue);

    DollarToINR(iValue);
    
    return 0;
}
