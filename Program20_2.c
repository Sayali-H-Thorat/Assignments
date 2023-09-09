//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept number from user and display below pattern
//
//Input:iRow = 4   iCol = 4
//Output: A       B       C       D
//        a       b       c       d
//        A       B       C       D
//        a       b       c       d
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
    char c = 'a';

    if(iRow < 0)
    {
        iRow = -iRow;
    }

    if(iCol < 0)
    {
        iCol = -iCol;
    }
    printf("Pattern is:\n");

    for(i = 1; i<= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1, c = 'a'; j<= iCol; j++)
            {
                printf("%c\t", c);
                c++;

            }
            
        }
        else
        {
            for(j = 1, ch = 'A'; j<= iCol; j++)
            {
                printf("%c\t", ch);
                ch++;
            }
            
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