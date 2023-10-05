////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept string from user and check whether it contain vowels in it not.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CheckVowel
//    Input             :   String
//    Output            :   Boolean
//    Description       :   Check Vowels in string
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              : 
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char *str)       // a  e  i  o  u
{
   bool bFlag = false;
   while(*str != '\0')
   {
      if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
      { 
         bFlag = true;
         break;
      }
      else if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
      {
         bFlag = true;
         break;
      }

      str++;
   }

   return bFlag;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char Arr[20];
   bool iRet = false;
   
   printf("Enter the String :\n");
   scanf("%[^'\n']s",Arr);

   iRet = CheckVowel(Arr);

   if(iRet == true)
   {
      printf("vowels is present in string\n");
   }
   else
   {
      printf("vowels is not present in string\n");
   }

   return 0;
}
