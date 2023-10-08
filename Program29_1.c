////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which display all elements which are perfect from singly linear linkedlist.
//
//Input: |11|->|28|->|17|->|41|->|6|->|89|
//Output: 6 28
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
// Function Name:     CheckPerfect()
// Description :      Check element is perfect or not. 
// Input :            No
// Output :           boolean.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
{
	int iSum = 0, iCnt = 0;
	int iTemp = iNo;
	
	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0 )
		{
			iSum = iSum + iCnt;
		}
	}
	return (iSum == iTemp);
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     DisplayPerfect()
// Description :      Display perfect elements. 
// Input :            Head 
// Output :           Perfect elements from LL.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPerfect(PNODE First)
{
	while(First != NULL)
	{
		if(CheckPerfect(First->data) == true)
		{
			printf("%d is perfect number.\n", First->data);
		}
		First = First -> next;
	}
}



int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    InsertLast(&Head,41);
    InsertLast(&Head,6);
    InsertLast(&Head,89);


    Display(Head);

    iRet = Count(Head);

    printf("Elements in LinkedList are: %d\n", iRet);

    DisplayPerfect(Head);

    return 0;
}