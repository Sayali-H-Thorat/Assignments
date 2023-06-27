///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept one number from user and print that number of even numbers on screen.
//
//Input: 7
//Output: 2 4 6 8 10 12 14
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: PrintEven()
// Description :  Accept one numbers from user and display the even no upto the entered number
// Input :        Integer
// Output :       (Integer)Even numbers
// Author :       Sayali Hanumant Thorat
// Date :         19/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;

    }
    for(i = 1; i <= (iNo*2);  i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t", i);
           
        }
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}






























