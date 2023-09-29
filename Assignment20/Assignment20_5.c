////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept division of student from user and depends on the division display exam timing
//                          There are 4 division in school as A,B,C,D. Exam of division A at 7AM,
//                          B at 8.30Am, C at 9.20AM and D at 10.30AM (Application should be case insensitive)
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   DisplayShedule
//    Input             :   Character
//    Output            :   boolean(True/False)
//    Description       :   Display timeing as per divisions
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   19.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayShedule(char CH)
{
   if((CH == 'A') || (CH == 'a'))
   {
      printf("Your exam at 7.00 AM\n");
   }
   else if((CH == 'B') || (CH == 'b'))
   {
      printf("Your exam at 8.30 AM\n");
   }
   else if((CH == 'C') || (CH == 'c'))
   {
      printf("Your exam at 9.20 AM\n");
   }
   else if((CH == 'D') || (CH == 'd'))
   {
      printf("Your exam at 10.30 AM\n");
   }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char cValue = '\0';
   
   printf("Enter the Division to check timing :\n");
   scanf("%c",&cValue);

   DisplayShedule(cValue);

   return 0;
}
