///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept character from user if character is small display its corresponding capital letter and if it is capital display its corresponding small letter.
//                    In other cases display as it is
//
//Input: Q
//Output: q
//
//Input: m
//Output: M
//
//Input: %
//Output: % 
//
//Input: 4
//Output:4 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h> 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Display()
// Description :      Accept character from user and display its corresponding capital and small letter.
// Input :            Character
// Output :           Characer(Small/Capital)
// Author :           Sayali Hanumant Thorat
// Date :             17/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Capital Letter is : %c", ch-32);
        
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Small Letter is : %c", ch+32);
        
    }
    else 
    {
        printf("Character is : %c", ch);
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