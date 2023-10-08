////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which search Last occurrence of particular element from singly linear linked list. Function should return position at which element is found.
//
//Input: |10|->|20|->|30|->|40|->|50|->|30|->|70|
//Input element : 30
//Output: 6
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     SearchLastOccurence()
// Description :      check the last occurrence of accepted number.
// Input :            Head and No
// Output :           Last ocurrence index.
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

int SearchLastOccurence(PNODE Head, int No)
{
    PNODE newn = Head; 
    int iPos = 0,iCnt = 0;
	while(newn != NULL)
    {
        
        if(newn->data == No)
        {
          iCnt = iPos;
           
        }
        iPos++;
        newn= newn->next;
        
    }
    return iCnt;

      
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iSearch = 0;
    int iNo = 0;

    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    InsertLast(&Head, 10);
    InsertLast(&Head, 30);
    InsertLast(&Head, 70);

    Display(Head);

    iRet = Count(Head);

    printf("Elements in LinkedList are: %d\n", iRet);

    printf("Enter the element you want to search:\n");
    scanf("%d", &iNo);

    iSearch = SearchLastOccurence(Head, iNo);

    if(iSearch == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Last Occurence of element is : %d\n", iSearch);
    }

    return 0;
}