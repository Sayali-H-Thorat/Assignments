////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which reverse each element of singly linear linkedlist.
//
//Input: |11|->|28|->|17|->|41|->|6|->|89|
//Output: |11|->|82|->|71|->|14|->|6|->|98|
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

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn -> next = *First;
        *First = newn;
    }

}
void InsertLast(PPNODE First,int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE temp = *First;

    newn->data=no;
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
    printf("Elements of linkedlist are: \n");

    while(First != NULL)
    {
        printf("| %d |", First->data);
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
// Function Name:     Reverse()
// Description :      reverse element from LinkedList. 
// Input :            iNo 
// Output :           Inplace reverse elements from LinkedList.
// Author :           Sayali Hanumant Thorat
// Date :             09/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo %10;
        iRev = (iRev *10) +iDigit;
        iNo = iNo/10;
    }
    return iRev;
}

void reverseIndividualData(PNODE First)
{
 
    if (First == NULL)
    {
        return;
    }
        
 
    while (First != NULL) 
    {
        First->data = Reverse(First->data);
        First = First->next;
    }
}
 
int main()
{

    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 17);
    InsertFirst(&Head,28);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 41);
    InsertLast(&Head, 6);
    InsertLast(&Head, 89);

    Display(Head);
    iRet = Count(Head);
    printf("Elements in linkedlist are : %d\n", iRet);

    reverseIndividualData(Head);
    Display(Head);
    iRet = Count(Head);
    printf("Elements in linkedlist are : %d\n", iRet);

    return 0;
}