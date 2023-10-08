//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
//
//Input: Marvellous Multi OS
//Character : M
//Output: 11
//
//Input: Marvellous Multi OS
//Character : W
//Output: -1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     LastChar()
// Description :      Return index of last occurrence of that character
// Input :            String
// Output :           Return index of last occurrence of that character
// Author :           Sayali Hanumant Thorat
// Date :             18/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int LastChar(char *str, char ch)
{
   int temp = -1;
    int iCnt = 0;

    while(*str != '\0')
    {
        
        if(*str == ch)
        {
            temp = iCnt;
        }
        iCnt++;
        str++;
    }

    return temp;
   
    
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

    iRet = LastChar(arr, cValue);

    printf("Last occurence of %c is at index: %d\n",cValue, iRet);

    return 0;

}