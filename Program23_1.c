///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept character from user and check whether it is alphabet or not(A-Z a-z)
//
//Input: F
//Output: TRUE
//
//Input: &
//Output: FALSE   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkAlpha()
// Description :      Accept character and check whether it is alphabet or not
// Input :            character
// Output :           alphabet or not  
// Author :           Sayali Hanumant Thorat
// Date :             16/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL ChkAlpha(char ch)
{
    if((ch >= 'a') && (ch <= 'a'))
    {
        return TRUE;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("It is character.");
    }
    else
    {
        printf("It is not character.");
    }

    return 0;
}
