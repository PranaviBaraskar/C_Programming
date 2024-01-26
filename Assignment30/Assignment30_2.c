/*
    Write a program which search last occurrence of particular element
    from singly linear linked list.
    Function should return position at which elements is found.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
   int data;
   struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertLast(PPNODE Head, int No)
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
        PNODE temp = *Head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of linkedlist are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head->next;
    }
}

int SearchLastOcc(PNODE Head, int iNo)
{
    int iCount = 0;
    int iPos = 0;

    while(Head != NULL)
    {
        iCount++;
        if(Head->data == iNo)
        {
            iPos = iCount;
        }
        Head = Head->next;
    }
    printf("NULL\n");
    
    return iPos;
}

int main()
{
   PNODE First = NULL;
   
   int iSize = 0;
   int iValue1 = 0, iPos = 0;
   int iRet = 0;
   int iCnt = 0;

   printf("Enter the size of Linklist\n");
   scanf("%d",&iSize);

   printf("Enter the nodes : \n");

   for(iCnt = 1; iCnt <= iSize; iCnt++)
   {
      printf("Enter the %d node\n",iCnt);
      scanf("%d",&iValue1);

      InsertLast(&First,iValue1);
   }

   printf("Enter the elements to know the first occurance\n");
   scanf("%d",&iPos);

   Display(First);

   iRet = SearchLastOcc(First,iPos);

   printf("Last Occurance of %d is : %d\n",iPos,iRet);

   return 0;
}