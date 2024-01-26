/*
    Write a program which Display Largest digit element of single linked list.
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

void DisplayLarger(PNODE Head)
{
    int iDigit = 0;
    int iMin = 0;
    int temp = 0;

    printf("Largest digit in elements in linkedlist :\n");

    while(Head != NULL)
    {
        temp = Head->data ;
        while(temp != 0)
        {
            iDigit = temp % 10;
            if(iMin < iDigit)
            {
                iMin = iDigit;
            }
         
            temp = temp / 10;
        }
        printf("%d\t",iMin);
        iMin = 0;
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

   DisplayLarger(First);

   return 0;
}