//Problem Statement: Write a recursive program which accept number from user and display below pattern.
//
//Input:5
//
//Output: * * * * *
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int No)
{
	static int iCnt = 1;  
	
	if(iCnt <= No)
	{
		printf("*\t");
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