////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 2 :  Accept N numbers from user and return difference between frequency of 
//                           even number and odd numbers.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Frequency
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display Difference of even and odd.
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   12.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength )
{
   int iCnt = 0;
   int iEven = 0;
   int iOdd = 0;

   // Counting even elements...
   for(iCnt = 0; iCnt < iLength; iCnt ++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iEven++;
      }
   } 

   // Counting odd elements...
   for(iCnt = 0; iCnt < iLength; iCnt ++)
   {
      if((Arr[iCnt] % 2) != 0)
      {
         iOdd++;
      }
   } 

   // Returning the difference between of even and odd number count...
   return (iEven-iOdd);
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

   printf("Difference between of even and odd number count are : %d\n",iRet);

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}