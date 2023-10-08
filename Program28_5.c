////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which return smallest element from singly linear linkedlist.
//
//Input: |110|->|230|->|20|->|240|->|640|
//Output: 20
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Minimum()
// Description :      Smallest element from LinkedList. 
// Input :            Head 
// Output :           Smallest element from LinkedList.
// Author :           Sayali Hanumant Thorat
// Date :             07/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

int Minimum(PNODE Head)
{
    PNODE newn = Head;
    int iMin = Head->data;
 
    while (newn != NULL) 
    {
        if (iMin > newn->data)
        {
            iMin = newn->data;
        }
        newn = newn->next;
    }
    return iMin;
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    InsertLast(&Head,240);
    InsertLast(&Head,640);


    Display(Head);

    iRet = Count(Head);

    printf("Elements in LinkedList are: %d\n", iRet);

    iRet = Minimum(Head);

    printf("Smallest element in linked list is: %d\n", iRet);


    return 0;
}