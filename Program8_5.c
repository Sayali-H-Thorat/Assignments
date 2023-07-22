///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which accept number from user and display its table in reverse
//Input: 2
//Output: 20   18   16   14   12  10   8   6   4   2 
//
//Input:  5
//Output: 50   45   40   35   30   25  20  15  10  5    
//
//Input:  -5
//Output:  50   45   40   35   30   25  20  15  10  5
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     TableRev()
// Description :      Accept number from user and display its table in reverse order
// Input :            Integer
// Output :           Table(Integer)
//Time Complexity:    N
// Author :           Sayali Hanumant Thorat
// Date :             03/11/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    printf("Reverse table of %d is :\t", iNo);

    for(iCnt = 10; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}