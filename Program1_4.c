///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement:Accept one number from user and Check whether it is divisible by 5 or not
//
//Input: 20
//Output: Divisible by 5
//
//Input: 3
//Output : Not Divisible by 5
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Check()
// Description :  Accept number from user and check whether it is divisible by 5 or not
// Input :        Integer
// Output :       Divisible by 5/Not Divisible by 5
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}