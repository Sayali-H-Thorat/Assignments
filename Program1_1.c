///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement:Divide two numbers
//
//static Input: 15 / 5 
//Output:3
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Divide()
// Description :  Divide the number
// Input :        Integer
// Output :       Integer
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0 )
    {
        return -1;
    }
    
    iAns = iNo1 / iNo2;

    return iAns;
}


int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d", iRet);

    return 0;
}