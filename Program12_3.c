//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and count frequency of 2 in it.
//
//Input:  2395
//Output: 1
//
//Input:  1018
//Output: 0
//
//Input:  9000
//Output: 0
//
//Input:  922432
//Output: 3 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CountTwo()
// Description :      Accept number from user and count the frequency of two in it
// Input :            Integer
// Output :           Fequency of two in number(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             06/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("Count of Two is : %d\n", iRet);

    return 0;
}