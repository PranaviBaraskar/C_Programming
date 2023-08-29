////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 5 :  Accept N numbers from user and display summation of digits of each number.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   DigitsSum
//    Input             :   integer, integer
//    Output            :   nothing returns
//    Description       :   Display the summation of digits 
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   14.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
   int iCnt = 0;
   int iDigit = 0;
   int iSum = 0;

   printf("Summation of digits of each elements : \n");

   // Summation of digits of each number...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      while(Arr[iCnt] != 0)
      {
         iDigit = Arr[iCnt] % 10;
         iSum = iSum + iDigit;
         Arr[iCnt] = Arr[iCnt] / 10; 
         
         if(Arr[iCnt] == 0)
         {
            printf("Element %d : \n",iCnt);
            printf("%d\n",iSum);
            iSum = 0;
         }
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
   DigitsSum(ptr,iSize);
   
   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}