////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 2 :  Accept N numbers from user and return the smallest number.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Minimum
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display the smallest element in array
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   14.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iLength)
{
   int iCnt = 0;
   int iMin = 0;
   iMin = Arr[0];

   // Finding smallest number in Array...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] < iMin) 
      {
         iMin = Arr[iCnt];
      } 
   }
  
   return iMin;
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
   iRet = Minimum(ptr,iSize);
   
   printf("Product of all odd elements : %d\n",iRet);

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}