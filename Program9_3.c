///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program to find even factorial of given number
//
//Input: 5
//Output: 8   (4 * 2)
//
//Input: -5
//Output: 8   (4 * 2)
//
//Input: 10
//Output: 3840   (10 * 8 * 6 * 4 * 2)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: EvenFactorial()
// Description :  Accept one numbers from user and display the even factorial of that number.
// Input :        Integer
// Output :       Even Factorial(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}