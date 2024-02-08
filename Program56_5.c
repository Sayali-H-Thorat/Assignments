//Problem Statement: Write a recursive program which accept number from user and return its reverse number.
//
//Input:523
//
//Output: 325
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(int No)
{
	
	int iDigit = 0;

    if(No != 0)
    {
        iDigit = No % 10;
        printf("%d",iDigit);
        No = No / 10;
        Reverse(No);
    }
	
}

int main()
{
	int Value = 0;
	
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	Reverse(Value);
    
	return 0;
}
