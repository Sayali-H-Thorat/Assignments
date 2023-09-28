//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept string from user and return difference between frequency of small and capital characters
//
//Input: MarvellouS
//Output: 6  (8 - 2)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Difference()
// Description :      Accept string and give difference between small and capital characters
// Input :            String
// Output :           Integer(Difference between capital and small characters)
// Author :           Sayali Hanumant Thorat
// Date :             17/11/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    if(*str == 0)
    {
        return 1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt1++;
        }
        else
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt1 - iCnt2;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("Difference between capital and small Letters are : %d\n", iRet);

    return 0;
}