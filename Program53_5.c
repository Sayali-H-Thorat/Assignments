//Problem Statement: Write a recursive program which display below pattern.
//
//Output: a b c d e f
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
	static int iCnt = 0;
    static char ch = 'a';

    if(iCnt <= 5 )
    {
        printf("%c\t", ch);
        ch++;
        iCnt++;
        DisplayR(); 

    }
}
int main()
{
	DisplayR();
    
	return 0; 
}