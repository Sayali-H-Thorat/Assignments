///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept distance in kilometer and convert it into meter(1 KM = 1000 M)
//
//Input:  5
//Output: 5000
//
//Input:  12
//Output: 12000  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     KMtoMeter()
// Description :      Accept distance in KM from user and convert it to Meter
// Input :            Distance in KM(Integer)
// Output :           Meter(Integer)
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             05/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iAns = 0;

    if(iNo != 0)
    {
        iAns = iNo * 1000;
    }

    return iAns;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance in KM:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter : %d", iRet);

    return 0;
}