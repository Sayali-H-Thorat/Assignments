//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and accept one character. Return frequency of that character
//
//Input: Marvellous Multi OS
//character : M
//Output: 2
//
//Input: Marvellous Multi OS
//character : W
//Output: 0
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkChar()
// Description :      Return the count of character in string.
// Input :            String and one character
// Output :           Frequency of character.
// Author :           Sayali Hanumant Thorat
// Date :             18/11/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character to count the frequency :\n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency of %c is: %d\n",cValue,iRet);

    return 0;

}