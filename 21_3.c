// 3. Write a program which display product of all Digits from singly linear linkedlist.
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

void DisplayProduct(PNODE Head)
{
        int iDigit = 0, iMult = 0;
        printf("\n Products of all Digits of all elements are:");

  while(Head != NULL)
    {
        iMult = 1;

        while((Head -> Data) != 0)
        {
            iDigit = ((Head -> Data) % 10);
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            (Head -> Data) = ((Head -> Data) / 10);
        }
        printf("%d\t",iMult);
        Head = Head -> next;
    }
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);
    iRet = Count(First);
    printf("\nnumber of Nodes are: %d\n", iRet);

    DisplayProduct(First);

    return 0;
}