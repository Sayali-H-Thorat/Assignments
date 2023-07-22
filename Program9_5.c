///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept one number from user and return difference between summation of all its factorial and non factorial.
//
//Input: 5
//Output: -7  (8 - 15)
//
//Input: -5
//Output: -7  (8 - 15)
//
//Input: 10
//Output: 2895 (3840 - 945)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: FactorialDiff()
// Description :  Accept one numbers from user and display the difference between summation of all its factorial and non factorial
// Input :        Integer
// Output :       Difference between factorial and non factorial(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0,iAns = 0;
    int iFact1 = 1;
    int iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;

        }
        iAns = iFact2 - iFact1;

    }
    return iAns;

    

}
int main()  
{
    int iValue =0;
    int iRet= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is: %d", iRet);

    return 0;
}