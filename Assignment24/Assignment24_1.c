////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept string from user and accept one character.
//                          Check whether that charater is present in string or not.
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CheckChar
//    Input             :   String
//    Output            :   boolean 
//    Description       :   Check whether given character is present or not
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :  
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool CheckChar(char *str, char cNO)     
{

   while(*str != '\0')
   {
      if(*str == cNO)
      {
         break;
      }
      str++;
   }

   if(*str == cNO)
   {
      return true;
   }
   else
   {
      return false;
   }  
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//     Enter Point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   char Arr[20];
   char ch = '\0';
   bool iRet = false;
   
   printf("Enter the String :\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter character to check :\n ");
   scanf(" %c",&ch);

   iRet = CheckChar(Arr,ch);

   if(iRet == true)
   {
      printf("%c is present in string\n",ch);
   }
   else
   {
      printf("%c is present not in string\n",ch);
   }

   return 0;
}
