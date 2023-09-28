//Problem Statement: Accept character from user and check whether it is Digit or not(0-9)
//
//Input: 7
//Output: TRUE
//
//Input: d
//Output: FALSE   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CheckDigit()
// Description :      Accept character and check whether it is Digit or not
// Input :            character
// Output :           digit or not  
// Author :           Sayali Hanumant Thorat
// Date :             16/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter the Digit:\n");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);
    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }

    return 0;
}
