///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept two numbers from user and check whether numbers are equal or not
//
//Input: 10 10
//Output: Number is Equal
//
//Input: 10 12
//Output: Number is not Equal
//
//Input: 10 -10
//Output: Number is not Equal
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: ChkEqual()
// Description :  Accept two numbers from user and check they are equal or not
// Input :        Integers
// Output :       Number is not Equal/Number is Equal(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0; 
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please Enter the number :\n");
    scanf("%d%d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);
    if(bRet == TRUE)
    {
        printf("Number is Equal");
    }
    else
    {
        printf("Number is not Eqaul");
    }

    return 0;
}