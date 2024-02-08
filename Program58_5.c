//Problem Statement: Write application which accept file name and one count from user and read that number of characters from starting position of the file.
//
//Input: Demo.txt  
//       12
//Output: Display first 12 characters from Demo.txt
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
	
	fd = open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		return -1;
	}
	
	Length = read(fd,Data,12);
	
	printf("Data from file is \n");
	
	write(1,Data,Length);
	
	close(fd);
	
	return 0;
}