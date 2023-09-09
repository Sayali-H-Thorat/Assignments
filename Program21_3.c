//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept number of rows and columns from user and display below pattern
//
//Input: iRow = 5 iCol = 5
//Output:  a b c d e
//         1 2 3 4 5 
//         a b c d e  
//         1 2 3 4 5 
//         a b c d e 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Pattern()
// Description :      Accept numberof Rows and coumns from user and display pattern
// Input :            Integer(Rows and columns)
// Output :           Pattern
// Author :           Sayali Hanumant Thorat
// Date :             15/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++,ch++)
	{
        char ch = 'a';
		for(j = 1; j <= iCol; j++)
		{
			if((i % 2) != 0 )
			{
				printf("%c\t", ch);
                ch++;				
			}
			else 
			{
                printf("%d\t", j);
				
			}
					
		}
		printf("\n");
		
	}
	
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}