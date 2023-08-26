//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and return the count of digits between 3 and 7.
//
//Input:  2395
//Output: 1
//
//Input:  1018
//Output: 0    
//
//Input:  9922
//Output: 0
//
//Input:  4521
//Output: 2
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountRanget()
// Description :      Accept number from user and display count of digits between 3 and 7
// Input :            Integer
// Output :           Count of digits between 3 and 7(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             06/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(((iDigit > 3) && (iDigit < 7)))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = CountRange(iValue);

    printf("Count of numbers between 3 and 7 is : %d", iRet);

    return 0;
}