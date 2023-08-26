//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and return multiplication of all digits
//
//Input:  2395
//Output: 270
//
//Input:  1018
//Output: 0   
//
//Input:  9440
//Output: 0
//
//Input:  922432
//Output: 864
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     MultDigits()
// Description :      Accept number from user and display multiplication of all digits
// Input :            Integer
// Output :           Multiplication of all digits(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             06/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits is : %d\n", iRet);

    return 0;
}