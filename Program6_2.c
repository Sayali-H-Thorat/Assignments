///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and check whether that number is greater than 100 or not
//
//Input: 101
//Output: Number is greater
//
//Input: 13
//Output: Number is smaller
//
//Input: -50
//Output: Number is smaller
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: ChkGreater()
// Description :  Accept one numbers from user and chek it is greater than or less than 100
// Input :        Integer
// Output :       Greater/ Smaller
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;

    BOOL bRet = FALSE;

    printf("Please enter number:\n");
    scanf("%d", &iValue);

    bRet =ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Number is greater");
    } 
    else
    {
        printf("Number is smaller");
    }

    return 0;
}