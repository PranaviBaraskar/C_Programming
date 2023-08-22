////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 3 :  Accept N numbers from user and check whether that number contains 11 in it or not.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FAlSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Check
//    Input             :   integer, integer
//    Output            :   Boolean(True/False)
//    Description       :   Display if 11 is present or not.
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   12.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL Check(int Arr[], int iLength )
{
   int iCnt = 0;

   // Checking if elements contain 11 or not...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] == 11)
      {
         break;
      }
   }

   // Returning (True or False)...
   if(Arr[iCnt] == 11)
   {
      return TRUE;
   }
   else
   {
      return FAlSE;
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
   BOOL bRet = FAlSE;

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
   bRet = Check(ptr,iSize);
   
   if(bRet == TRUE)
   {
      printf("11 is present in elements\n");
   }
   else
   {
      printf("11 is not present in elements\n");
   }

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}