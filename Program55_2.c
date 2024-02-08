//Problem Statement: Write a recursive program which accept number from user and return summation of its digits
//Input:879
//
//Output: 24
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int No)
{
	static int iCnt = 1;  
	
	if(iCnt <= No)
	{
		printf("%d\t",iCnt);
		iCnt++;
		DisplayR(No); 
	}
}
int main()
{
	int Value =0;
    
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	DisplayR(Value);
	
	return 0; 
}
#include<stdio.h>

int SumDigitsR(int No)
{
	
	static int iSum = 0;
	int iDigit = 0;
	
	if(No != 0)
	{
		iDigit = No % 10;
		iSum = iSum + iDigit;
		No = No/10;
		SumDigitsR(No);
	}
	return iSum;
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	iRet = SumDigitsR(Value);
	printf("Sum of digits is :%d\n", iRet);
	
	return 0;
}
