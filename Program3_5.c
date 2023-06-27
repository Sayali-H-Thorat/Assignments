///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept one character from user and check whether that character is vowel(a,e,i,o,u) or not
//
//Input: E
//Output: It is vowel(TRUE)
//
//Input: d
//Output: It is not vowel(FALSE)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: ChkVowel()
// Description :  Accept character from user and check it is vowel or not
// Input :        character
// Output :       It is vowel(TRUE) || It is not vowel(FALSE)
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL ChkVowel(char CValue)
{
    if((CValue == 'a'|| CValue == 'e'||CValue == 'i'||CValue == 'o'||CValue == 'u') || (CValue == 'A'|| CValue == 'E'||CValue == 'I'||CValue == 'O'||CValue == 'U'))
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

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}
