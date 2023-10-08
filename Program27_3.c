//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and accept one character. Return index of first occurence of that character.
//
//Input: Marvellous Multi OS
//character : M
//Output: 0
//
//Input: Marvellous Multi OS
//character : W
//Output: -1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     FirstOccurence()
// Description :      Return the index of first occurence of character in string.
// Input :            String and one character
// Output :           Index of first occurence of character.
// Author :           Sayali Hanumant Thorat
// Date :             18/11/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FirstOccurence(char *str, char ch)
{
    int iCnt=0;

   
    while(*str != '\0')
    {
	    if(*str == ch)
	    {
		    return iCnt;
	    }
	    str++;
	    iCnt++;
    
    }
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

    iRet = FirstOccurence(arr, cValue);

    printf("First occurence of %c is at index: %d\n",cValue, iRet);

    return 0;

}