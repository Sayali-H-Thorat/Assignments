//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and toggle the cases
//
//Input: Marvellous Multi OS
//Output: mAEVELLOUS mULTI os
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     strToggleX()
// Description :      Accept string and convert capital letters to lowercase letter and vice versa
// Input :            String
// Output :           capital letters to lowercase letter and vice versa
// Author :           Sayali Hanumant Thorat
// Date :             21/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void strToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
             *str = *str - 32;

        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
             *str = *str + 32;

        }
        str++;
    }

}

int main()
{
    char arr[20];

    printf("Enter the String :\n");
    scanf("%[^'\n']s", arr);

    printf("Original String is: %s\n", arr);

    strToggleX(arr);
    
    printf("Modified String is: %s\n", arr);

    return 0;

}