///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept one number from user and display below pattern.
//
//Input: 5
//Output: *    *   *   *   *   #   #   #   #   #   
//
//Input: 6
//Output: *    *   *   *   *    *   #  #   #   #   #   #   
//
//Input: 2
//Output: *    *    #   #
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: Display()
// Description :  Accept one numbers from user and display the pattern
// Input :        Integer
// Output :       Pattern( * # )
// Author :       Sayali Hanumant Thorat
// Date :         03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{

    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;


}