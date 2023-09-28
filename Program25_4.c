//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and check whether it contains vowels in it or not
//
//Input: Marvellous
//Output: TRUE
//
//Input: xyz
//Output: FALSE   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkVowel()
// Description :      check whether string contain vowels or not
// Input :            String
// Output :           (True or false)string contain vowels or not
// Author :           Sayali Hanumant Thorat
// Date :             17/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')) || ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u')))
        {
            return TRUE;
        }
        str++;
    }   

}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string:\n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no Vowels");
    }

    return 0;
}