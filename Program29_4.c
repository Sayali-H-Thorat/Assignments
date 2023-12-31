////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which display second maximum elements from singly linear linkedlist.
//
//Input: |110|->|230|->|320|->|240|
//Output: 240
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


void InsertLast(PPNODE First, int No)  
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));    
	PNODE temp = *First;
	
	newn->data = No;   
	newn->next = NULL; 
	
	if(*First == NULL)   
	{
		*First = newn;
	}
	else  
	{
		while(temp->next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}	
}

void Display(PNODE First)  
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
// Function Name:     Maximum()
// Description :      Second maximum element. 
// Input :            Head 
// Output :           Display second maximum element from LL.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE First)
{
	int iMax = 0;
	
	if(First == NULL)
	{
		printf("Linked list is empty\n");
		return 0;
	}
	
	iMax = First->data;
    int SecMax = First->data;
	
    while(First != NULL)
    {
      if (First->data > iMax) 
      {
        SecMax = iMax;
        iMax = First->data;
      }
      else if(First->data > SecMax)
      
        SecMax = First->data;
        First = First->next;
      
         
   }
   return SecMax;
   
    
	
	
}

int main()
{
	//struct node * Head = NULL;
	PNODE Head = NULL;	
	int iRet = 0;
	
	InsertLast(&Head,11);
	InsertLast(&Head,21);
	InsertLast(&Head,51);
	InsertLast(&Head,101);
	InsertLast(&Head,111);
	InsertLast(&Head,121);
	
	Display(Head);
	
	iRet = Maximum(Head);
	printf("Second Largest element is : %d\n", iRet);
	
	return 0;
}