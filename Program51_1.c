//Problem Statement: Write a program which accepts one number and position from user and check whether bit at that position is ON or OFF.If bit is ON return true otherwise return false
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos)
{
	UINT iMask = 0X00000001;  //UINT iMask = 1;
	UINT Result = 0;
	
	if((Pos < 1) || (Pos >32))
	{
		printf("Invalid Position, it should be in between 1 to 32");
		return false;
	}
	
	iMask = iMask << (Pos -1);  //Dynamic mask formation
	
	Result = No & iMask;
	
	if(Result == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}

int main()
{
	UINT Value = 0;
	UINT Position = 0;
	bool bRet = false;
	
	printf("Enter number :\n");
	scanf("%d", &Value);
	
	printf("Enter the position of bit:\n");
	scanf("%d", &Position);
	
	bRet = CheckBit(Value,Position);
	if(bRet == true)
	{
		printf("Bit at the position %d is ON \n", Position);
	}
	else
	{
		printf("Bit at the position %d is OFF \n", Position);
	}
	
	return 0;
	
}
