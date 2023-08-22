////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 1 :  Accept N numbers from user and return difference between summation of even 
//                            elements and summation of odd elements.
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Difference
//    Input             :   integer, integer
//    Output            :   integer
//    Description       :   Summation of even And odd
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   12.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[], int iLength )
{
   int iCnt = 0;
   int iEven = 0;
   int iOdd = 0;

   // Addition of all even elements...
   for(iCnt = 0; iCnt < iLength; iCnt ++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iEven = iEven + Arr[iCnt];
      }
   } 

   // Addition of all odd elements...
   for(iCnt = 0; iCnt < iLength; iCnt ++)
   {
      if((Arr[iCnt] % 2) != 0)
      {
         iOdd = iOdd + Arr[iCnt];
      }
   } 

   // Returing the summation of even and odd...
   return (iEven - iOdd);
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
   int iRet = 0;
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

   printf("Successfully allocate the memory ...\n");

   printf("Enter the elements in array : \n");

   // Taking elements input in array...
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("Enter %d element : \n",iCnt+1);
      scanf("%d",&ptr[iCnt]);
   }

   // Calling function by Address... 
   iRet = Difference(ptr,iSize);

   printf("Summation of even and odd is : %d \n",iRet);

   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}