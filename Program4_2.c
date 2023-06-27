///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and display its factors in decreasing order
//
//Input: 12
//Output: 6  4  3  2  1
//
//Input: 13
//Output: 1
//
//Input: 10
//Output: 5 2  1
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: FactRev()
// Description :  Accept one numbers from user and display factors in decreasing order
// Input :        Integer
// Output :       Factors in reverse order(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         20/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCnt = 0;

    printf("Factors are:\n");

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) ==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}