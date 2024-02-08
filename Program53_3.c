//Problem Statement: Write a recursive program which display below pattern.
//
//Output: 5 4 3 2 1
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
	static int iCnt = 5;  
	
	if(iCnt >= 1)
	{
		printf("%d\t",iCnt);
		iCnt--;
		DisplayR();  //Recursive call
	}
}
int main()
{
	DisplayR();
    
	return 0; 
}