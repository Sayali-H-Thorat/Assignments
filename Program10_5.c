///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept area in square feet and convert it into square meter(1 SF = 0.0929 SM)
//
//Input:  5
//Output: 0.464515
//
//Input:  7
//Output: 0.650321      
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     SquareMeter()
// Description :      Accept area in square feet and convert it to square meter
// Input :            Area(float)
// Output :           Meter(double)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(float iValue)
{
    float iAns = 0.0;

    if(iValue != 0)
    {
        iAns = iValue * 0.0929;
    }   

    return iAns;
}

int main()
{
    float iValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in Square Feet :\n");
    scanf("%f", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in meter: %lf", dRet);

    return 0;
}