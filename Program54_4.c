//Problem Statement: Write a recursive program which accept number from user and display below pattern.
//
//Input:6
//
//Output: A B C D E F 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int No)
{
	static int iCnt = 0;
    static char ch = 'A';

    if(iCnt <= No )
    {
        printf("%c\t", ch);
        ch++;
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