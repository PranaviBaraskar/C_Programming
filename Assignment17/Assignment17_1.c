////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept number of rows and number of columns from user and display below patern
// 
//                           Output :   1    2     3     4   
//                                      5    6     7     8   
//                                      9    1     2     3 
//                                      4    5     6     7
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
   int iNum = 1;

   for(i = 1; i <= iRow; i++)
   {
      for(j = 1; j <= iCol; j++,iNum++)
      {
         if(iNum == 10)
         {
            iNum = 1;
         }
         printf("%d\t",iNum);
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