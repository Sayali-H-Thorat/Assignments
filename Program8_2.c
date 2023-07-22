///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept single digit number from user and print it into word
//
//Input: 8
//Output: Eight
//
//Input:  -3
//Output: Three
//
//Input:  12
//Output:  Invalid number
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Display()
// Description :      Accept digit from user and print it into word
// Input :            Digit
// Output :           Digits in word format
//Time Complexity:    
// Author :           Sayali Hanumant Thorat
// Date :             03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    switch(iNo)
    {
        case 1:
                printf("One");
                break;
        case 2:
                printf("Two");
                break;
        case 3:
                printf("Three");
                break;
        case 4:
                printf("Four");
                break;
        case 5:
                printf("Five");
                break;
        case 6:
                printf("Six");
                break;
        case 7:
                printf("Seven");
                break;
        case 8:
                printf("Eight");
                break;
        case 9:
                printf("Nine");
                break;
        default: 
                printf("Invalid number");
                break;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the digit:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;

}