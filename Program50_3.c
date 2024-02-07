//Problem Statement: Write a program which accepts one number from user and toggle the 7th bit of that number and Return modified number
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 0000 0000 0000 0000 0000 0000 0000
0000 0000 0000 0000 0000 0000 0100 0000
0 0 0 0 0 0 4 0
0X00000040

*/
UINT ToggleBit(UINT No)
{
	UINT iMask = 0X00000040;
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



