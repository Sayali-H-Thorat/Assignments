//Problem Statement: Write a recursive program which display below pattern.
//
//Output: A B C D E F
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR()
{
	static int iCnt = 0;
    static char ch = 'A';

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