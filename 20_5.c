// 5. Write a program which display Addition of Digits from singly linear linkedlist.
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
        int iDigit = 0, iDigSum = 0;
        printf("\nSummation of Digits are: ");

  while(Head != NULL)
    {
        iDigSum = 0;
        while((Head -> Data) != 0)
        {
            iDigit = ((Head -> Data) % 10);
            iDigSum = iDigSum + iDigit;
            (Head -> Data) = ((Head -> Data) / 10);
        }
        printf("%d  ",iDigSum);
        Head = Head -> next;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);
    iRet = Count(First);
    printf("\nnumber of Nodes are: %d\n", iRet);

    SumDigit(First);

    return 0;
}