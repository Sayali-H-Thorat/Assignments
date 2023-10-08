////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement: Write a program which rdisplay all pallindrome element from singly linear linkedlist.
//
//Input: |11|->|28|->|17|->|414|->|6|->|89|
//Output: 11 6 414
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


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
// Function Name:     CheckPallindrome()
// Description :      Check whether element is pallindrome or not from LinkedList. 
// Input :            No 
// Output :           Boolean.
// Author :           Sayali Hanumant Thorat
// Date :             09/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckPallindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = iNo;  //iTemp To preserve original value
    int flag = 0;
	
		
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo =iNo / 10;
	}
	
	return (iRev == iTemp);
	
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name:     DisplayPallindrome()
// Description :      Display pallindrome element from LinkedList. 
// Input :            Head 
// Output :           Pallindrome element from LinkedList.
// Author :           Sayali Hanumant Thorat
// Date :             09/12/2022
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayPallindrome(PNODE First)
{
 
    if (First == NULL)
    {
        return;
    }
    while (First != NULL) 
    {
        if(CheckPallindrome(First->data) == true)
		{
			printf("%d is Pallindrome number.\n", First->data);
		}
		First = First -> next;
    }
}

 
int main()
{

    PNODE Head = NULL;
    int iRet = 0;
    bool bRet = false;

    InsertFirst(&Head, 17);
    InsertFirst(&Head,28);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 414);
    InsertLast(&Head, 6);
    InsertLast(&Head, 89);

    Display(Head);
    iRet = Count(Head);
    printf("Elements in linkedlist are : %d\n", iRet);

    DisplayPallindrome(Head);
    

    return 0;
}