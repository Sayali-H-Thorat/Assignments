//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and check whether it contains 0 or not
//
//Input:  2395
//Output: There is no Zero
//
//Input:  1018
//Output: It contains Zero
//
//Input:  9000
//Output: It contains Zero
//
//Input:  10687
//Output: It contains Zero
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkZero()
// Description :      Accept number from user and check it contains zero or not
// Input :            Integer
// Output :           Zero or not(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             06/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

    
}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero.");
    }
    else
    {
        printf("There is no Zero.");
    }

    return 0;


}