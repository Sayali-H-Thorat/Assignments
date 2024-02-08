//Problem Statement: Write a recursive program which display below pattern.
//
//Output: * * * * *
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
	static int iCnt = 1;  
	
	if(iCnt <= 5)
	{
		printf("*\t");
		iCnt++;
		DisplayR();  //Recursive call
	}
}
int main()
{
	DisplayR();
    
	return 0; 
}