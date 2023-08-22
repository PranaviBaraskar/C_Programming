////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 2 :  Accept N numbers from user and display all such elements which are divisible by 5.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Display
//    Input             :   integer, integer
//    Output            :   nothing returns
//    Description       :   display elements which is divisible by 5
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   12.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[], int iLength )
{
   int iCnt = 0;

   printf("Elements which are divisible by 5 : \n");

   // Cheking if elements are divisible by 5 or not...
   for(iCnt = 0; iCnt < iLength; iCnt ++)
   {
      if((Arr[iCnt] % 5) == 0)
      {
         printf("%d\n",Arr[iCnt]);
      }

   } 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iSize = 0;
   int *ptr = NULL;
   int iCnt = 0;

   // Taking size of array...
   printf("Enter the size of array : \n");
   scanf("%d",&iSize);

   ptr = (int *)malloc(iSize * sizeof(int));

   if(ptr == NULL)
   {
      printf("Unable to allocate memory ...\n");
      return -1;
   }

   printf("Successfully to allocate memory ...\n");

   printf("Enter the elements in array : \n");

   // Taking elements input in array...
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter %d element : \n",iCnt+1);
      scanf("%d",&ptr[iCnt]);
   }

   // Calling function by Address... 
   Display(ptr,iSize);


   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}