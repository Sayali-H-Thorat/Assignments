//Problem Statement: Write a program which accepts one number from user and OFF the 7th bit of that number if it is ON. Return modified number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 0000 0000 0000 0000 0000 0000 0000

1111 1111 1111 1111 1111 1111 1011 1111
0XFFFFFFBF

*/
UINT OffBit(UINT No)
{
	UINT iMask = 0XFFFFFFBF;
    UINT Result =0;
	
    Result = No & iMask;

	return Result;
	
	
}

int main()
{
	UINT Value = 0;
	UINT iRet =0;
	
	printf("Enter number :\n");
	scanf("%d", &Value);
	
	iRet = OffBit(Value);
	
	printf("Updated number is :%d\n",iRet);
	
	return 0;
	
}