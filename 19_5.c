// 5. Write a program which returns smallest elements from singly linear linkedlist.
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

 int Minimum(PNODE Head)
 {
     int iCnt = 0;
     int iMin = 0;

     iMin = Head -> Data;

    while(Head != NULL)
    {
       if(Head -> Data < iMin)
       {
            iMin = Head -> Data;
       }
       Head = Head -> next;
    }
 return iMin;
 }

int main()
{
    PNODE First = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);
    iRet = Count(First);
    printf("\nNumber of elements from linkedlist are: %d\n",iRet);

    iRet = Minimum(First);
    printf("\n Smallest elements is: %d\n", iRet);

    return 0;
}