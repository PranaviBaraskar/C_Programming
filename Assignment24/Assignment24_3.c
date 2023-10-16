////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Write a program which accept string from user and accept one character.
//                          and return frquency of that character
//                                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define ERR_NOTFOUND -1

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   FirstOcc
//    Input             :   String
//    Output            :   nothing retruns 
//    Description       :   first occurence of Character 
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   23.5.2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstOcc(char *str, char cNO)     
{
   int iCount = 0;

   while(*str != '\0')
   {
      if(*str == cNO)
      {
         break;
      }
      iCount++;
      str++;
   }

   if(*str == '\0')
   {
      return ERR_NOTFOUND;
   }
   else
   {
      return iCount;  
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
   int iRet = 0;
   
   printf("Enter the String :\n");
   scanf("%[^'\n']s",Arr);

   printf("Enter character to check :\n ");
   scanf(" %c",&ch);

   iRet = FirstOcc(Arr,ch);

   if(iRet == ERR_NOTFOUND )
   {
      printf("Character is not present\n");
   }
   else
   {
      printf("%c is first occurence %d in string\n",ch,iRet);
   }

   
   
   

   return 0;
}
