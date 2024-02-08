//Problem Statement: Write a program which accepts one number and position from user and Toggle bits.Return modified number.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT No,UINT Pos)
{
	UINT iMask = 0X00000001;
	UINT Result = 0;
	
	iMask = iMask << (Pos - 1);
	
	// iMask = ~iMask;
	Result = (No ^ iMask);
	
	return Result;
	
	
}

int main()
{
	UINT Value = 0, Position = 0;
	UINT iRet =0;
	
	
	printf("Enter number :\n");
	scanf("%d", &Value);
	
	printf("Enter the Position :\n");
	scanf("%d", &Position);
	
	iRet = ToggleBit(Value,Position);
	
	printf("Updated number is :%d\n",iRet);
	
	return 0;
	
}