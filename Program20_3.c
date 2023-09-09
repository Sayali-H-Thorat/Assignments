//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept number from user and display below pattern
//
//Input:iRow = 3   iCol = 5
//Output: A       A       A       A       A
//        B       B       B       B       B
//        C       C       C       C       C
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Pattern()
// Description :      Accept numbers from user and display pattern
// Input :            Integer
// Output :           Pattern
// Author :           Sayali Hanumant Thorat
// Date :             11/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = 'A';

    if(iRow < 0)
    {
        iRow = -iRow;
    }

    if(iCol < 0)
    {
        iCol = -iCol;
    }
    printf("Pattern is:\n");

    for(i = 1, ch = 'A'; i<= iRow; i++,ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
           printf("%c\t",ch);
        }
        printf("\n");
    }

    

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}