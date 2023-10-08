////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which returns addition of all elements from singly linear linkedlist.
//
//Input: |10|->|20|->|30|->|40|
//Output: 100
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     Addition()
// Description :      Addition of all the elements.
// Input :            Head.
// Output :           Addition of all the elements(Integer).
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

int Addition(PNODE Head)
{
    PNODE newn = Head;
    int iSum = 0;

    while(newn != NULL)
    {
        iSum = iSum + newn->data;
        newn = newn->next;
    }
    return iSum;
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    InsertLast(&Head,30);
    InsertLast(&Head,40);


    Display(Head);

    iRet = Count(Head);

    printf("Elements in LinkedList are: %d\n", iRet);

    iRet = Addition(Head);

    printf("Addition of elements in linked list is: %d\n", iRet);


    return 0;
}