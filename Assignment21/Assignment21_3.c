////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept character from user. If it is capital then display all the characters from 
//                          the input characters till Z. If input character is small then print all characters 
//                          in reverse order till a. In other cases return directly.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   Display
//    Input             :   Character
//    Output            :   nothing return
//    Description       :   display letter till end 
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              : 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
   char count = '\0';

   if((ch >= 'A') || (ch <= 'Z') || (ch >= 'a') || (ch <= 'z'))
   {
      return;
   }

   if((ch >= 'A') && (ch <= 'Z'))
   {
      for(count = 'A'; count <= 'Z'; count++)
      {
         if(ch <= count)
         {
            printf("%c\t",count);
         }
      }
   }

   if((ch >= 'a') && (ch <= 'z'))
   {
      for(count = 'z'; count >= 'a'; count--)
      {
         if(ch >= count)
         {
            printf("%c\t",count);
         }
      }
   }

   printf("\n");

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char cValue = '\0';
   
   printf("Enter the character :\n");
   scanf("%c",&cValue);

   Display(cValue);

   return 0;
}
