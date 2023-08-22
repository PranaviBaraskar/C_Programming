////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 4 :  Accept N numbers from user and return frequency of 11 form it.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Frequency
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display count of 11 is present in element.
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   12.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength )
{
   int iCnt = 0;
   int iCount = 0;

  // Counting elements contain 11...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] == 11)
      {
         iCount++;
      }
   }
 
   // Returning count of 11 present in elements...
   return iCount;
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
   int iRet = 0;

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
   iRet = Frequency(ptr,iSize);

   printf("Frequency of 11 present in elements is : %d\n",iRet);

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}