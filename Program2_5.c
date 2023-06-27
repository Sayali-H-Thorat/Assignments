///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept the number from user and check whether number is Even or Odd
//
//Input: 2
//Output: 2 is Even
//
//Input: 5
//Output : 5 is Odd
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: CheckEven()
// Description :  Accept one numbers from user and check if the reminder is equal to 0 or not. If equal to 0 then return TRUE otherwise return FALSE.
// Input :        Integer
// Output :       TRUE/FALSE
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == TRUE)
    {
        printf("%d is Even\n", iValue);
    }
    else
    {
        printf("%d is Odd\n", iValue);
    }

}