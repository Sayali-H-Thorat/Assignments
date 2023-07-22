///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept one number from user and find odd factorial of that number.
//
//Input: 5
//Output: 15  (5 * 3 * 1)
//
//Input: -5
//Output: 15  (5 * 3 * 1)
//
//Input: 10
//Output: 3840   (9 * 7 * 5 * 3 * 1)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: OddFactorial()
// Description :  Accept one numbers from user and display odd factorial of that number
// Input :        Integer
// Output :       Odd Factorial(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()  
{
    int iValue =0;
    int iRet= 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}