// 3. Write a program which display all Pallindrome from singly linear linkedlist.
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> Data = iNo;
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
        printf("|%d|->", Head-> Data);
        Head = Head -> next;
    }
    printf("NULL\n");
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

void SumDigit(PNODE Head)
{
        int iDigit = 0, iDigNew = 0, iDigOld = 0;
        printf("\n Reverse List is: ");

  while(Head != NULL)
    {
        iDigNew = 0;
        iDigOld = (Head -> Data);
        while((Head -> Data) != 0)
        {
            iDigit = ((Head -> Data) % 10);
            iDigNew = (iDigNew * 10) + iDigit;
            (Head -> Data) = ((Head -> Data) / 10);
        }
        if(iDigOld == iDigNew)
        {
             printf("%d\t",iDigOld);
        }
        Head = Head -> next;
    }
    printf("\n");
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("\nnumber of Nodes are: %d\n", iRet);

    SumDigit(First);

    return 0;
}