////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept number of rows and number of columns from user and display below pattern
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Pattern
//    Input             :   String
//    Output            :   nothing retruns 
//    Description       :   Display pattern
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   23.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;

   for(i = iRow; i >= 1; i--)
   {
      for(j = 1; j <= iCol; j++)
      {
         if(i == j)
         {
            printf("#\t");
         }
         else if((i >= j) || (j >= i))
         {
            printf("*\t");
         }
         
      }
      printf("\n");
   }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iNo1 = 0;
   int iNo2 = 0;

   printf("Enter rows : \n");
   scanf("%d",&iNo1);

   printf("Enter columns : \n");
   scanf("%d",&iNo2);

   Pattern(iNo1,iNo2);

   return 0;
}
