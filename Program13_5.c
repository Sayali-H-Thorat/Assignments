//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and return difference between summation of even digits and sumation of odd digits
//
//Input:  2395
//Output: -15   (2 - 17)
//
//Input:  1018
//Output: 6   (8 - 2)   
//
//Input:  8440
//Output: 16   (16 - 0)
//
//Input:  5733
//Output: -18   (0 - 18)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountDiff()
// Description :      Accept number from user and display difference between summation of odd and even digits
// Input :            Integer
// Output :           Difference between summation of odd and even digits(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             06/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int CountDiff(int iNo)
{
    int iDigit = 0,iAns = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }

        iNo = iNo / 10;
        iAns = iSum1 - iSum2;
    }
   
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("Difference between sum of even and odd digits is :%d\n", iRet);

    return 0;
}