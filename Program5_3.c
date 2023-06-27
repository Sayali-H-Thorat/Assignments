///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and display non factors of that number.
//
//Input: 12
//Output: 5 7 8 9 10 11
//
//Input: 1
//Output: 2 3 4 5 6 7 8 9
//
//Input: 10
//Output: 3 4 6 7 8 9
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: NonFact()
// Description :  Accept one numbers from user and display the non factors of that number.
// Input :        Integer
// Output :       Non Factors of a number(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         20/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    printf("Non factors are:\n");

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}