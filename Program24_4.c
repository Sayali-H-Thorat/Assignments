//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept character from user and check whether it is special symbol or not(! @ # $ % ^ & *)
//
//Input: %
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
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     ChkSpecial()
// Description :      check whether character is special or not
// Input :            character
// Output :           character is special or not
// Author :           Sayali Hanumant Thorat
// Date :             17/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if((ch=='!') || (ch=='@') || (ch=='#') || (ch=='$') || (ch=='%') || (ch=='^') || (ch=='&') || (ch=='*'))
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

   bRet = ChkSpecial(cValue);
   if(bRet == TRUE)
   {
        printf("It is special character");
   }
   else
   {
        printf("It is not special character");
   }

    return 0;

}