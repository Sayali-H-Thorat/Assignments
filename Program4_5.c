///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept one number from user and return difference between summation of all its factors and non factors.
//
//Input: 12
//Output: -34   (16 - 50)
//
//Input: 10
//Output: -29  (8 - 37)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: FactDiff()
// Description :  Accept one numbers from user and display the difference between summation of all its factors and non factors
// Input :        Integer
// Output :       Difference between factors and non factors(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         20/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
	int iSum2 = 0, iAns = 0;
	

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum1 = iSum1 + iCnt;            
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
         iAns = iSum2 -iSum1;
    }
   
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Difference between factors and non factors is:%d\t", iRet);

    return 0;
}