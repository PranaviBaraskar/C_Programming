////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 5 :  Accept N numbers from user and accept one another number as NO, 
//                           return frequency of NO form it.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Frequency
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display frequency of given input form elements.
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   12.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
   int iCnt = 0;
   int iCount = 0;

  // Counting elements contain iNo(Value)...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] == iNo)
      {
         iCount++;
      }
   }
 
   // Returning count...
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
   int iValue = 0;

   // Taking size of array...
   printf("Enter the size of array : \n");
   scanf("%d",&iSize);

   printf("Enter number to check frequency of that number : \n");
   scanf("%d",&iValue);

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
   iRet = Frequency(ptr,iSize,iValue);

   printf("Frequency of %d present in elements is : %d\n",iValue,iRet);

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}