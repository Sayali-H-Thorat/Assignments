//Problem Statement: Write a recursive program which accept number from user and return its factorial
//
//Input:5
//
//Output: 120
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialR(int No)
{
	static int Sum = 1;
	static int iCnt = 1;
	
	if(iCnt <= No)
	{
		Sum = Sum * iCnt;
		iCnt++;
		FactorialR(No);
		
	}
	return Sum;
}

int main()
{
	int Value = 0;
	int Ret = 0;
	
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	Ret = FactorialR(Value);
	printf("Factorial is :%d\n", Ret);
	
	return 0;
}
