///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept the number from user and display first number second number of times
//
//Input: 12 5
//Output: 12 12 12 12 12 
//
//Input: -2 3
//Output : -2 -2 -2
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display()
// Description :  Accept two numbers from user and if loop counter i.e iCnt is less than or equal to second no then print first number
// Input :        Integer
// Output :       Integer
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo, int iFreqency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFreqency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    printf("Enter frequency\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
