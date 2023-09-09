//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept number of rows and columns from user and display below pattern
//
//Input: iRow =4  iCol =5
//Output:   4       4       4       4       4
//          3       3       3       3       3
//          2       2       2       2       2
//          1       1       1       1       1
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Pattern()
// Description :      Accept numberof Rows and coumns from user and display pattern
// Input :            Integer(Rows and columns)
// Output :           Pattern
// Author :           Sayali Hanumant Thorat
// Date :             11/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }

    if(iCol < 0)
    {
        iCol = -iCol;
    }

    printf("Pattern is:\n");

    for(i = iRow; i> 0; i--)
    {
        for(j = iCol; j> 0; j--)
        {
           printf("%d\t", i);
        }
        printf("\n");
    }




}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}