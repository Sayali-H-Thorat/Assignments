///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement:Accept one number from user and print that number of * on screen
//
//Input: 2
//Output: * *
//
//Input: 5
//Output : * * * * *
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display()
// Description :  Accept number from user and print that number of * on screen using for loop
// Input :        Integer
// Output :       *
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    Display(iValue);
    
    return 0;
}