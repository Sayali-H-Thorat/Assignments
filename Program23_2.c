//Problem Statement: Accept character from user and check whether it is Capital or not(A-Z)
//
//Input: F
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
// Function Name:     CheckCapital()
// Description :      Accept character and check whether it is Capital or not
// Input :            character
// Output :           capital or not  
// Author :           Sayali Hanumant Thorat
// Date :             16/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    bRet = CheckCapital(cValue);
    if(bRet ==TRUE)
    {
        printf("It is Capital Letter");
    }
    else
    {
        printf("It is not capital letter");
    }

    return 0;
}