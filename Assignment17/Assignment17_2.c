////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept number of rows and number of columns from user and display below patern
// 
//                           Output :   2    4     6     8     10
//                                      1    3     5     7     9
//                                      2    4     6     8     10
//                                      1    3     5     7     9
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
   int iNum1 = 1;
   int iNum2 = 1;

   for(i = 1; i <= iRow; i++)
   {
      for(j = 1; j <= iCol; j++)
      {
         if((i % 2) != 0)
         {
            printf("%d\t",iNum1);
         }
         else
         {
            printf("%d\t",iNum2);
         }
         iNum1 = iNum1*2;
         iNum2 = iNum2+2;
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




/nononoononononooNONONONONON