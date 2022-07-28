// 2. Write a program which search Prime number from singly linear linkedlist.
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

void DisplayPrime(PNODE Head)
{
        int iCnt = 0, iCount = 0;
        printf("\nPrime Numbers are: ");

  while(Head != NULL)
    {
          iCount = 0;
           for(iCnt = 2; iCnt <=((Head -> Data)/2); iCnt++)
           {
                if(((Head -> Data)% iCnt) == 0)
                {
                    iCount++;
                }
           }
           if(iCount == 0)
                {
                    printf("%d  ",(Head -> Data));
                }
        Head = Head -> next;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 89);
    InsertFirst(&First, 22);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("\nnumber of Nodes are: %d\n", iRet);

    DisplayPrime(First);

    return 0;
}