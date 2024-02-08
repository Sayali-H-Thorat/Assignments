//Problem Statement: Write application which accept file name from user and one string from user.Write that string at the end of file.
//
//Input: Demo.txt
//       Hello World
//
//Output: Written Hello World at end of the file.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char Fname[20];	
	int fd = 0,Length = 0;
	char Data[100];
	
	printf("Enter the file name that you want to open\n");
	scanf("%s", &Fname);
	
	fd = open(Fname,O_RDWR | O_APPEND);
	
	if(fd == -1)
	{
		return -1;
	}
	
	printf("Enter the data that you want to write in file\n");
	scanf(" %[^'\n']s", Data);
		
	Length = strlen(Data);
		
	//write(Kashat,Kay,Kiti);	
	write(fd,Data,Length);	
	
	
	return 0;
}