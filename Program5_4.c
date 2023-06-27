///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept one number from user and display summation of non factors.
//
//Input: 12
//Output: 50
//
//Input: 10
//Output: 37
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: SumNonFact()
// Description :  Accept one numbers from user and display sum of non factors
// Input :        Integer
// Output :       Sum of non factors(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         20/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;            
        }
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of non factors is:%d\n", iRet);

    return 0;
}