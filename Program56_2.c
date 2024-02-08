//Problem Statement: Write a recursive program which accept number from user and return largest digit
//
//Input:87983
//
//Output: 9
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Max(int No)
{
	
	static int iMax = 0;
	int iDigit = 0;
	
	if(No != 0)
	{
		iDigit = No % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
		
		No = No/10;
		Max(No);
			

	}
	return iMax;
	
	
	
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	iRet = Max(Value);
	printf("Largest digit is :%d\n", iRet);
	
	
	
	return 0;
}
