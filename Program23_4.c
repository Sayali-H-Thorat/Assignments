//Problem Statement: Accept character from user and check whether it is small or not(a-z)
//
//Input: g
//Output: TRUE
//
//Input: D
//Output: FALSE   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     CheckSmall()
// Description :      Accept character and check whether it is small or not
// Input :            character
// Output :           small or not  
// Author :           Sayali Hanumant Thorat
// Date :             16/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    printf("Enter the characte:\n");
    scanf("%c", &cValue);

    bRet = CheckSmall(cValue);
    if(bRet == TRUE)
    {
        printf("It is Small Case Letter");
    }
    else
    {
        printf("It is not small case letter");
    }

    return 0;
}