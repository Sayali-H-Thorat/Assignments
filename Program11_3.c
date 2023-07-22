///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which acceptrange from user and return addition of all numbers between that range
//
//Input:  23   30
//Output: 212
//
//Input:  10  18
//Output: 126     
//
//Input: -10  2
//Output: Invalid Range
//
//Input:  90  18
//Output: Invalid range    
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     RangeSum()
// Description :      Accept range from user and display addition of that numbers
// Input :            Integer
// Output :           Addition of numbers between the range(Integer)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range ");

        return 0;
    }

    if((iStart < 0) || (iEnd <0))
    {
        printf("Invalid range");

        return 0;
    }


    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 =0, iRet = 0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter ending point:\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is :%d",iRet);

    return 0;
}