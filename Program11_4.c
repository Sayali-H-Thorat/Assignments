///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept range from user and display addition of all even numbers in between that range
//
//Input:  23   30
//Output: 108
//
//Input:  10   18
//Output: 70      
//
//Input:  -10  2
//Output: Invalid Range
//
//Input:  90  18
//Output: Invalid range    
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     RangeSumEven()
// Description :      Accept range from user and display addition of all even numbers in between that range
// Input :            Integer
// Output :           Addition of all even numbers between range(Integer)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iEnd < iStart)
    {
        printf("Invalid range\n ");

        return 0;
    }

    if((iStart < 0) || (iEnd <0))
    {
        printf("Invalid range\n");
        
        return 0;
    }


    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue1 =0, iValue2 = 0, iRet=0;

    printf("Enter starting point:\n");
    scanf("%d", &iValue1);

    printf("Enter endinging point:\n");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is: %d", iRet);

    return 0;
}