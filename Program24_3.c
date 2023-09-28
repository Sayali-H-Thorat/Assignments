///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept character from user if it is capital then display all the character from the input character till Z.
//                   If input character is small then printl all the characters in reverse order till a. 
//                   In other cases return directly.
//
//Input: Q
//Output: Q       R       S       T       U       V       W       X       Y       Z
//
//Input: m
//Output: m       l       k       j       i       h       g       f       e       d       c       b       a
//
//Input: 8
//Output: 8
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Display()
// Description :      Display alphabets if capital show till Z and if Small show reverse till a.
// Input :            Character
// Output :           characters(If capital display till Z(Ascending), if small Display till a(Descending/reverse))
// Author :           Sayali Hanumant Thorat
// Date :             17/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch--);
        }

    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch++);
        }
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        printf("%c is not alphabet \n", ch);
    }
        
        
       

}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}