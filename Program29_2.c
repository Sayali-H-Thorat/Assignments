////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which display all elements which are prime from singly linear linkedlist.
//
//Input: |11|->|20|->|17|->|41|->|22|->|89|
//Output: 11 17 41 89
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
// Function Name:     CheckPrime()
// Description :      Check element is prime or not. 
// Input :            No
// Output :           boolean.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
	int iSum = 0, iCnt = 0;
    int flag = 0;
	
	for(iCnt =2; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0 )
		{
            flag = 1;
			break;
		}
        
	}
	
    if(flag == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     DisplayPrime()
// Description :      Display prime elements. 
// Input :            Head 
// Output :           prime elements from LL.
// Author :           Sayali Hanumant Thorat
// Date :             08/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPrime(PNODE First)
{
	while(First != NULL)
	{
		if(CheckPrime(First->data) == true)
		{
			printf("%d\t", First->data);
		}
		First = First -> next;
	}
}
  


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    InsertLast(&Head,41);
    InsertLast(&Head,22);
    InsertLast(&Head,89);


    Display(Head);

    iRet = Count(Head);

    printf("Elements in LinkedList are: %d\n", iRet);

    DisplayPrime(Head);


    return 0;
}