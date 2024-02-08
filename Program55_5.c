//Problem Statement: Write a recursive program which accept number from user and return product of digits
//Input:Hello
//
//Output: 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int No)
{
	
	static int iMult = 1;
	int iDigit = 0;
	
	if(No != 0)
	{
		iDigit = No % 10;
		iMult = iMult * iDigit;
		No = No/10;
		Mult(No);
	}
	return iMult;
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	iRet = Mult(Value);
	printf("Product of digits is :%d\n", iRet);
	
	return 0;
}
