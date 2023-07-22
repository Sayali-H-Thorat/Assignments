///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and display its table
//Input: 2
//Output: 2     4     6     8     10     12     14     16     18     20
//
//Input:  5
//Output: 5    10    15    20    25    30    35    40    45    50     
//
//Input:  -5
//Output: 5    10    15    20    25    30    35    40    45    50
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Table()
// Description :      Accept number from user and print its table
// Input :            Integer
// Output :           Table(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    printf("Table of %d is:\t", iNo);

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
         printf("%d\t", iNo * iCnt);

    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}