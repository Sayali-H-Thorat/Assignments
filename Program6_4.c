///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept three numbers from user and print its multiplication
//
//Input: 5    4     7
//Output: 140  (5*4*7)
//
//Input: 5  0   7
//Output: 0  (5*0*7)
//
//Input: 5  0   0
//Output: 0   (5*0*0)
//
//Input: 0  0   0
//Output: 0   (0*0*0)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Multiply()
// Description :  Accept three numbers from user and display multiplication of that number
// Input :        Integer
// Output :       Multiplication of No(Integer)
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    if((iNo1) && (iNo2) && (iNo3) < 0)
    {
        return 0;
    }

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the numbers :\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d ", iRet);

    return 0;

}