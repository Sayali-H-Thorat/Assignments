///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept range from user and display all numbers in between that range.
//
//Input:  23   35
//Output: 24      26      28      30      32      34
//
//Input:  10   18
//Output: 10      12      14      16      18     
//
//
//Input:  10   10
//Output: 10
//
//Input:  -10   2
//Output: -10     -8      -6      -4      -2      0       2   
//
//Input:  90   18
//Output: Invalid Range
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     RangeDisplayEven()
// Description :      Accept start and end from user and display even numbers in that range
// Input :            Integer
// Output :           Even Numbers(Integer)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range ");
    }

    for(iCnt=iStart; iCnt <= iEnd;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }

    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;

}