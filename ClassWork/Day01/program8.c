/*

step1: Understand the problem statement
step2: Write the Algorithm
step3: Deside the progamming Language
step4: Write the program
step5: Test the program

*/

/*
ALGORITHM

START
    Accept first number as no1
    Accept second number as no2
    Perform addition of no1 and no2
    Display the Addition on Screen
STOP

*/

#include<stdio.h>

float AdditionTwoNnumber(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;        //business logic 
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNnumber(fValue1,fValue2);

    printf("Addition is :%f\n",fRet);

    return 0;
}