//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and count frequency of such a digits which are less than 6.
//
//Input:  2395
//Output: 3
//
//Input:  1018
//Output: 3    
//
//Input:  9440
//Output: 10
//
//Input:  96672
//Output: 1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Count()
// Description :      Accept and display frequency count of less than 6 digits in that number
// Input :            Integer
// Output :           Frequency count of less than 6 digit(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             06/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        
        
        if(iDigit < 6)
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

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("Count of less than 6 number is : %d\n", iRet);

    return 0;
}