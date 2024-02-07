//Problem Statement: Write a program which accepts one number from user and toggle 7th bit of that number and return modified number.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 0000 0000 0000 0000 0000 0000 0000
0000 0000 0000 0000 0000 0010 0100 0000
0 0 0 0 0 2 4 0
0X00000240

*/
UINT ToggleBit(UINT No)
{
	UINT iMask = 0X00000240;
	UINT iAns = 0;
	
	iAns = No ^ iMask;
	
	return iAns;
	
	
}

int main()
{
	UINT Value = 0;
	UINT iRet =0;
	
	printf("Enter number :\n");
	scanf("%d", &Value);
	
	iRet = ToggleBit(Value);
	
	printf("Updated number is :%d\n",iRet);
	
	return 0;
	
}



