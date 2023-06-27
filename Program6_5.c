///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept total marks and obtained marks from user and calculate percentage
//
//Input: 1000   745
//Output: 74.50%
//
//Input: 500    350
//Output: 70.00%
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Percentage()
// Description :  Accept total and obtained marks from user and display percentage
// Input :        Integer
// Output :       Percentage(float)
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(float iNo1, float iNo2)
{
    float fTotalPer = 0.0;

    fTotalPer =((iNo2 / iNo1) * 100.0);

    return fTotalPer;
}
int main()
{
    float iValue1 = 0;
    float iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks:\n ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks :\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Total Percentage is : %lf ", fRet);

    return 0;
}