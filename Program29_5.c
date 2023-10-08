////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which display addition of digits of elements from singly linear linkedlist.
//
//Input: |11|->|230|->|20|->|240|->|640|
//Output: 2     5      2      6      10
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertLast(PPNODE First, int No)   //N complexity
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));    //Step 1: Allocate memory
	PNODE temp = *First;
	
	newn->data = No;   // Initialisation
	newn->next = NULL; // Initialisation
	
	if(*First == NULL)   //If linkedlist is empty
	{
		*First = newn;
	}
	else   //If linked list contains atleast one node
	{
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}	
}

void Display(PNODE First)   //N complexity
{
	printf("Elements from linkedlist are : \n");
	
	while(First != NULL)
	{
		printf("| %d |->", First->data);
		First = First->next;
	}
	printf("NULL \n");	
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     DisplayDigitsSum()
// Description :      Display summation of digits of an elements. 
// Input :            Head 
// Output :           Sum of digits of elements from LL.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigitsSum(PNODE First)
{
	int iSum = 0, iDigit = 0, iNo = 0;
	
	while(First != NULL)
	{
		iNo = First->data;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;
		}
		
		printf("%d\t",iSum);
		First = First->next;
		iSum = 0;
		
	}
}


int main()
{
	PNODE Head = NULL;	
	
	InsertLast(&Head,110);
	InsertLast(&Head,230);
	InsertLast(&Head,20);
	InsertLast(&Head,240);
	InsertLast(&Head,640);
	
	Display(Head);
	
	DisplayDigitsSum(Head);
		
	
	return 0;
}