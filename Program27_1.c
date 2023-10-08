//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
//
//Input: Marvellous Multi OS
//character : e
//Output: True 
//
//Input: Marvellous Multi OS
//character : w
//Output: False
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkChar()
// Description :      check whether character is present in string or not.
// Input :            String and one character
// Output :           Character is present or not.
// Author :           Sayali Hanumant Thorat
// Date :             18/11/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;


}

int main()
{
    char arr[20];
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character to find out occurence:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);
    if(bRet == TRUE)
    {
        printf("Character is found ");
    }
    else
    {
        printf("Character is not found");
    }

    return 0;

}