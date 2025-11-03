#include<stdio.h>

int FactorialDiff(int iNo)
{

    int eFact=1;
    int oFact=1;
    int iCnt=0;

    if(iNo < 0)       
    {
        iNo= -iNo;
    }

    
     for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2==0)              
        {
            eFact=eFact*iCnt;

        }
        else
        {
            oFact=oFact*iCnt;      
        }

        
    }

    return eFact-oFact;             

}

int main()
{

    int iValue=0;
    int iRet=0;

    printf("enter a number");
    scanf("%d", &iValue);

    iRet=FactorialDiff(iValue);

    printf("Differnce between even and od  factor %d", iRet );

    return 0;

}
