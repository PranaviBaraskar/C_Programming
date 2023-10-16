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
//    Function Name     :   LastOcc
//    Input             :   String
//    Output            :   nothing retruns 
//    Description       :   Last occurence of Character 
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int LastOcc(char *str, char cNO)     
{
   int iCount = 0;
   int iPos = 0;

   while(*str != '\0')
   {
      if(*str == cNO)
      {
         iPos = iCount;
      }
      iCount++;
      str++;
   }
   if(iPos != 0)
   {
      return iPos;
   }
   else
   {
      return ERR_NOTFOUND;
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

   iRet = LastOcc(Arr,ch);

   if(iRet == ERR_NOTFOUND )
   {
      printf("Character is not present\n");
   }
   else
   {
      printf("%c is Last occurence %d in string\n",ch,iRet);
   }

   
   
   

   return 0;
}
