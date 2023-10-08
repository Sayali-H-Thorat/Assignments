////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which display largest digit of all element from singly linear linkedlist.
//
//Input: |11|->|250|->|532|->|419|
//Output: 1     5      5      9
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
// Function Name:     DisplayLarge()
// Description :      Largest digit of element from LinkedList. 
// Input :            Head 
// Output :           Largest digit of element from LinkedList.
// Author :           Sayali Hanumant Thorat
// Date :             09/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayLarge(PNODE First)
{
	int iNo = First->data, IsMax = iNo % 10,iDigit = 0;
	
	while(First != NULL)
	{	
        
		while(iNo != 0)
		{
			iDigit = iNo % 10;
            if(IsMax < iDigit)
            {
                IsMax = iDigit;
            }
			iNo = iNo / 10;
		}
		
        printf("%d\t",IsMax);		
		First = First->next;
        iNo = First->data;
        IsMax = iNo % 10;
	}
}



int main()
{
	PNODE Head = NULL;	
	
	InsertLast(&Head,11);
	InsertLast(&Head,250);
	InsertLast(&Head,532);
	InsertLast(&Head,419);
	
	Display(Head);
	
	DisplayLarge(Head);

	return 0;
}