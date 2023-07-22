//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and if number is less than 50 then print small, if it is
//greater thean 50 and less than 100 then print medium, if it is greater than 100 then print large.
//
//Input: 75
//Output: Number is Medium
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Number()
// Description :      Accept number from user and print small, medium or greater
// Input :            Integer
// Output :           Small, Medium, GreaterInteger
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is Small");
    }
    if((iNo >= 50) && (iNo <= 100))
    {
        printf("Number is Medium");
    }
    if(iNo > 100)
    {
        printf("Number is Greater");
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}