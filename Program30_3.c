////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which display product of all elements from singly linear linkedlist.
//
//Input: |11|->|20|->|32|->|41|
//Output: 1     2      6    4
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
// Function Name:     DisplayProduct()
// Description :      Display product of element from LinkedList. 
// Input :            Head 
// Output :           Display product of elements from LinkedList.
// Author :           Sayali Hanumant Thorat
// Date :             09/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayProduct(PNODE First)
{
	int iMult = 1, iDigit = 0, iNo = 0;
	
	while(First != NULL)
	{
		iNo = First->data;
		
		while(iNo != 0)
		{
			iDigit = iNo % 10;
			iMult = iMult * iDigit;
			iNo = iNo / 10;
		}
		
		printf("%d\t",iMult);
		First = First->next;
		iMult = 1;
		
	}
}



int main()
{
	PNODE Head = NULL;	
	
	InsertLast(&Head,11);
	InsertLast(&Head,20);
	InsertLast(&Head,32);
	InsertLast(&Head,41);

	
	Display(Head);
	
	DisplayProduct(Head);
		
	
	return 0;
}