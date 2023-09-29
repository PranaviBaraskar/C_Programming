////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Problem Statement  :  Accept Character from user and check whether it is digit or not (0-9).
//                          
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name     :   CheckDigit
//    Input             :   Character
//    Output            :   boolean(True/False)
//    Description       :   check the given character is digit or not
//    Author            :   Pranavi Ghanshyaam Baraskar
//    Date              :   
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL CheckDigit(char CH)
{
   char iCnt = '\0';
   BOOL bFlag = FALSE;

   if((CH <= '9') && (CH >= '0'))
   {
      bFlag = TRUE;
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
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the alphabet to check :\n");
   scanf("%c",&cValue);

   bRet = CheckDigit(cValue);

   if(bRet == TRUE)
   {
      printf("%c is Digit\n",cValue);
   }
   else
   {
      printf("%c is not Digit\n",cValue);
   }

   return 0;
}
