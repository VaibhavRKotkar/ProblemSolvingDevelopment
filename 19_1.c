// 1. Write a program which search first occurrence of particular elements from singly linear linkedlist.
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = no;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\nElements from linked list are: \n");
    while(Head != NULL)
    {
    printf("|%d| ->", Head -> Data);
    Head = Head -> next;
    }
    printf(" NULL\n");
 }

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

 int SearchFirstOcc(PNODE Head, int no)
 {
    int iCnt = 0;

    while(Head != NULL)
    {
        iCnt++;
        if(Head -> Data == no)
        {
                break;
        }
        Head = Head -> next;
    }
 return iCnt;
 }

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements from linkedlist are: %d\n",iRet);

    printf("Enter the number to search: ");
    scanf("%d", &iValue);
    iRet = SearchFirstOcc(First, iValue);
    printf("First occurrence of %d is at position : %d\n", iValue, iRet);

    return 0;
}