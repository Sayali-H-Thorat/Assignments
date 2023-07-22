///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and print all the odd numbers upto N
//
//Input:  18
//Output: 1       3       5       7       9       11      13      15      17
//
//Input:  10
//Output: 1       3       5       7       9      
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     OddDisplay()
// Description :      Accept number from user and print odd numbers till that number
// Input :            Integer
// Output :           Odd Numbers(Integer)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt =0;

    if(iNo <= 0)
    {
        iNo = -iNo;

    }
    for(iCnt = 1; iCnt < (iNo);  iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
           
        }

    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}