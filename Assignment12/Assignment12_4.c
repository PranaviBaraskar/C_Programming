////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement 4 :  Accept N numbers from user and display all such nubers which contain 3 digit in it.
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Digits
//    Input             :   integer, integer
//    Output            :   nothing returns
//    Description       :   Display the 3 digit elements in array
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   14.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iLength)
{
   int iCnt = 0;

   printf("3 Digits elements in array : \n");

   // Finding 3 digits number in Array...
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      if((Arr[iCnt] > 99) && (Arr[iCnt] < 1000)) 
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
   Digits(ptr,iSize);
   
   // Deallocating the memory..
   free(ptr);
   printf("Successfully deallocated the memory... \n");

   return 0;
}