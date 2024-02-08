//Problem Statement: Write a program which accepts one number from user and check whether 9th or 12th bit is ON or OFF
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000 0000 0000 0000 0000 1001 0000 0000
 0    0   0     0    0    9     0    0
00000900 Hexadecimal No
0X00000900
*/
bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000900;
    UINT Result = 0;
	
	Result = iNo & iMask;
	
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
	bool bRet =false;
	
	printf("Enter number :\n");
	scanf("%d", &Value);
	
	bRet = CheckBit(Value);
	
	if(bRet == true)
	{
		printf("9th and 12th bit is ON\n");
	}
	else
	{
		printf("9th and 12th bit is OFF\n");
		
	}
	
	return 0;
}