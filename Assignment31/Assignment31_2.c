/*
    Write a program which display all elements which are prime from singly linear linked list.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
   int data;
   struct Node *next;
}NODE, *PNODE, **PPNODE;

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void DisplayPrime(PNODE Head)
{
    printf("Prime numbers present in linkedlist : \t");

    while(Head != NULL)
    {
        if((Head->data % 2) != 0)
        {
            printf("%d\t",Head->data);
        }
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
   PNODE First = NULL;
   
   int iSize = 0;
   int iValue1 = 0;
   int iCnt = 0;

   printf("Enter the size of Linklist\n");
   scanf("%d",&iSize);

   printf("Enter the nodes : \n");

   for(iCnt = 1; iCnt <= iSize; iCnt++)
   {
      printf("Enter the %d node\n",iCnt);
      scanf("%d",&iValue1);

      InsertFirst(&First,iValue1);
   }

   Display(First);

   DisplayPrime(First);

   return 0;
}