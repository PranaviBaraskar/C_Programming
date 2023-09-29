////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept number of rows and number of columns from user and display below patern
// 
//                           Output :   *    *     *     *
//                                      *    *           *
//                                      *          *     *
//                                      *    *     *     *   
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Pattern
//    Input             :   integer, integer
//    Output            :   nothing returns
//    Description       :   Display pattern
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   16.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;

   for(i = 1; i <= iRow; i++)
   {
      
      for(j = 1; j <= iCol; j++)
      {
         if((i == j) || (i ==1) || (i == iRow) || (j == 1) || (j == iCol))
         {
            printf("*\t");
         }
         else
         {
            printf(" \t");
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
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter the row  :\n");
   scanf("%d",&iValue1);

   printf("Enter the column  :\n");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

   return 0;
}
