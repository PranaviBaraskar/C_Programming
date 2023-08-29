////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 3 :  Accept N numbers from user and return the difference between largest ans smallest number
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Difference
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Display the difference between largest and smallest element in array
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   14.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength)
{
   int iCnt = 0;
   int iMin = 0;
   int iMax = 0;
   iMin = Arr[0];

   // Finding largest number in Array...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] > iMax) 
      {
         iMax = Arr[iCnt];
      } 
   }

   // Finding smallest number in Array...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if(Arr[iCnt] < iMin) 
      {
         iMin = Arr[iCnt];
      } 
   }
  
   return (iMax - iMin);
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
   iRet = Difference(ptr,iSize);
   
   printf("Product of all odd elements : %d\n",iRet);

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}