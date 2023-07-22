///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and print its factorial.
//Input:  5
//Output: 120  (5*4*3*2*1)
//
//Input:  -5
//Output: 120  (5*4*3*2*1)     
//
//Input:  4
//Output:  24  (4*3*2*1)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Factorial()
// Description :      Accept number from user and print its factorial
// Input :            Integer
// Output :           Factorial(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt =1; iCnt <= iNo; iCnt++)
    {
        
            iFact = iFact * iCnt;
 
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is: %d", iValue,iRet);

    return 0;


}