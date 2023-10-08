////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which return addition of all even elements from singly linear linkedlist.
//
//Input: |11|->|20|->|32|->|41|
//Output: 52
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL; 

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First=newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL; 

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");

    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     AdditionEven()
// Description :      Display addition of even elements. 
// Input :            Head 
// Output :           Addition of even elements from LL.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int AdditionEven(PNODE First)
{
    int iSum = 0;
    PNODE newn = First;
	while(newn != NULL)
	{
        if(((newn->data)%2 == 0))
		{
			iSum = iSum + (newn->data);
		}
	   
		newn = newn -> next;
	}
    return iSum;
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;

  
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    InsertLast(&Head,32);
    InsertLast(&Head,41);
   


    Display(Head);

    iRet = Count(Head);

    printf("Elements in LinkedList are: %d\n", iRet);

    iRet = AdditionEven(Head);

    printf("Addition of even elements from linkedlist is : %d\n", iRet);

    return 0;
}