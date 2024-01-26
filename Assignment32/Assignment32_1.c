/*
    Write a program which reverse each element of single linked list.
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

void Reverse(PNODE Head)
{   
    int iTemp = 0;
    int iDigit = 0;
    int iReverse = 0;

    printf("Reverse elements in linkedlist :\n");

    while(Head != NULL)
    {
        iTemp = Head->data;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = (iReverse * 10) + iDigit;
            iTemp = iTemp / 10;
        }
        printf("%d\t",iReverse);
        iReverse = 0;
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

   Reverse(First);

   return 0;
}