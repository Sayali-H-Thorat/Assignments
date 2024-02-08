//Problem Statement: Write a recursive program which accept string from user and count number of characters.
//
//Input:Hello
//
//Output: 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayR(int No)
{
	static int iCnt = 1;  
	
	if(iCnt <= No)
	{
		printf("%d\t",iCnt);
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
#include<stdio.h>

int strlenR(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		strlenR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter String :\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = strlenR(Arr);
	printf("String length is: %d\n", iRet);
	
	
	return 0;
}
