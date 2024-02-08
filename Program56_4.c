//Problem Statement: Write a recursive program which accept number from user and return smallest digit
//
//Input:879817
//
//Output: 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Min(int No)
{
	
	int iDigit = 0;
    static int iMin = 9;

    if(No != 0)
    {
        iDigit = No % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        No = No / 10;
        Min(No);
    }
    return iMin;	
	
}

int main()
{
	int Value = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d", &Value);
	
	iRet = Min(Value);
	printf("smallest digit is :%d\n", iRet);
	
	
	
	return 0;
}
