//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Accept N numbers from user and check whether that numbers contains 11 in it or not
//
//Input:  N:6
//Elements:  85 66  11   80  93  88
//Output: 11 is present
//
//Input:  N:6
//Elements:  85 66  3  80  93  88
//Output: 11 is absent
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Check()
// Description :      Accept N numbers from user and check 11 is present or not
// Input :            Array of Integer
// Output :           11 present or not
// Author :           Sayali Hanumant Thorat
// Date :             09/11/2022
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0; 
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			break;
		}
	}
	if(iCnt == iLength)
	{
		
		return FALSE;
	}
	else
	{
		return TRUE;
	}
    
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE; 
    int iValue = 0;

    printf("Enter the number of Array Elements:\n");
    scanf("%d", &iSize);

    p =(int *)malloc(iSize * sizeof(int)); 

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

   printf("Enter the %d Elements:\n", iSize);
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        scanf("%d", &p[iCnt]);

   }

   bRet = Check(p, iSize);

   if(bRet == TRUE)
   {
        printf("11 Number is present in the array");
   }
   else
   {
        printf("11 Number is not present in the array");
   }

   free(p);


    return 0;
}