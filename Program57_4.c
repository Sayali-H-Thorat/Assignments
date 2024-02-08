//Problem Statement: Write application which accept file name from user and display size of the file.
//
//Input: Demo.txt
//
//Output: File size is 65 bytes
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
	int Size = 0;
	
	printf("Enter the file name that you want to open\n");
	scanf("%s", &Fname);
	
	fd = open(Fname,O_RDONLY);  //to Read file only
	
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	while((Length = read(fd,Data,sizeof(Data))) != 0)
	{
		Size = Size + Length;
	}
	
	printf("Size of file is %d bytes\n",Size);
	
	close(fd);
	
	
	return 0;
}

